use core::alloc::Layout;

extern crate alloc;

struct GlobalAlloc;

extern "C" {
    fn malloc_align(size: usize, align: usize) -> *mut u8;
    fn free(_ptr: *mut u8);
}

unsafe impl alloc::alloc::GlobalAlloc for GlobalAlloc {
    unsafe fn alloc(&self, layout: Layout) -> *mut u8 {
        malloc_align(layout.size(), layout.align())
    }

    unsafe fn dealloc(&self, ptr: *mut u8, _: Layout) {
        // free keeps track of layout presumably????
        free(ptr)
    }
}

#[global_allocator]
static ALLOC: GlobalAlloc = GlobalAlloc;

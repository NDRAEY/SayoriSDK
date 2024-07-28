#![no_std]
#![no_main]

mod alloc;

use core::panic::PanicInfo;

extern { fn printf(text: *const u8); }

#[no_mangle]
fn main() {
	unsafe {
		printf(b"Hello! Pika-Pika!\n" as *const u8);
	}
}

#[panic_handler]
fn _panic_handler(_info: &PanicInfo) -> ! {
	loop {}	
}

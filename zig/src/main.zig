extern fn printf(format: [*]const u8, ...) void;

//export fn _start() callconv(.Naked) noreturn {
export fn _start() void {
    //@call(.no_async, main, .{});
    //main();
    asm volatile ("call *%eax"
        :
        : [main] "{eax}" (main),
    );
}

export fn main() void {
    printf("AAAA\n");
}

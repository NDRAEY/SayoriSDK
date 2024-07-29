#include "iostream"

extern "C" {
	#include "../../libc/include/printf.h"
}

void __printf_cerr(const char* _s) {
	printf("cerr| %s", _s);
};

void __printf_cout(const char* _s) {
	printf("%s", _s);
};

namespace std {
	ostream cerr(__printf_cerr);
	ostream cout(__printf_cout);
}

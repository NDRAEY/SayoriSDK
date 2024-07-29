#include "memory"
#include "fstream"

extern "C" {
	void printf(const char* ch, ...);
}

using namespace std;

int main() {
	__cpp_init();

	
	std::fstream file("R:\\test.asm", std::ios::in);

	file.seekg(22, std::ios::beg);
	
	auto cur = file.tellg();

	printf("%d == 22\n", cur);

	return 0;
}

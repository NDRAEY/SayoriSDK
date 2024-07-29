#include "iostream"
#include "memory"
#include "string"

using namespace std;

void __printf_cerr(const char* _s);
void __printf_cout(const char* _s);

extern "C" void __cpp_init() {
	new (&cerr) ostream(__printf_cerr);
	new (&cout) ostream(__printf_cout);
}

int main() {
	__cpp_init();


	/*map<string, int> pokedex;

	pokedex["bulbasaur"] = 1;
	pokedex["pikachu"] = 25;
	pokedex["zeraora"] = 807;
	pokedex["mightyena"] = 262;
	pokedex["eevee"] = 133;

	for(const auto& pair : pokedex) {
		printf("%s is nr.%u\n", pair.first.c_str(), pair.second);
	}*/

	std::string mystring = "Hello, World from C++!";

	cout << mystring << "\n";

	return 0;
}

#include "iostream"
#include "memory"
#include "string"

using namespace std;

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

	cout << mystring << " " << 123456 << endl << endl;

	return 0;
}

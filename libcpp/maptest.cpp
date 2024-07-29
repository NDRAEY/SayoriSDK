#include "map"
#include "string"
#include "vector"

extern "C" {
	#include "../libc/include/printf.h"
}

using namespace std;

int main() {
	/*map<string, int> pokedex;

	pokedex["bulbasaur"] = 1;
	pokedex["pikachu"] = 25;
	pokedex["zeraora"] = 807;
	pokedex["mightyena"] = 262;
	pokedex["eevee"] = 133;

	printf("%d elements;\n", pokedex.table().size());
	for(const auto& elem : pokedex.table()) {
		printf("=> %s\n", elem.first.c_str());
	}

	for(const auto& pair : pokedex) {
		printf("%s is nr.%u\n", pair.first.c_str(), pair.second);
	}*/

	vector<string> pokemon;

	pokemon.push_back("Scyther");
	pokemon.push_back("Audino");
	pokemon.push_back("Eevee");
	pokemon.push_back("Chimecho");

	for(const auto& p : pokemon) {
		printf("%s\n", p.c_str());
	}

	return 0;
}

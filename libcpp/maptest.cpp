#include "map"
#include "string"
#include "vector"

extern "C" {
	#include "../libc/include/printf.h"
}

using namespace std;

int main() {
	map<string, int> pokedex;

	pokedex["bulbasaur"] = 1;
	pokedex["pikachu"] = 25;
	pokedex["zeraora"] = 807;
	pokedex["mightyena"] = 262;
	pokedex["eevee"] = 133;

	for(const auto& pair : pokedex) {
		printf("%s is nr.%u\n", pair.first.c_str(), pair.second);
	}

	return 0;
}

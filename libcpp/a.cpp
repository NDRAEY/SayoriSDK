#include <string>
#include <cstdio>

int main() {
	std::string mystring = "Hello, World from C++! ";

	mystring += "Wahahaha!";

	mystring.data()[31] = 'c';

	printf("%d\n", mystring.length());
	printf("%s\n", mystring.c_str());


	std::string t2 = mystring;

	printf("%d\n", t2.length());
	printf("%s\n", t2.c_str());


}

//
// Created by ndraey on 11.01.24.
//

#include "string"

extern "C" {
	#include "../../libc/include/memory.h"
	#include "../../libc/include/string.h"
}

using namespace std;

string::string()  {
	_length = 0;
	string_container = (char*)calloc(1, 1);
}

string::string(const char* charptr) {
	_length = strlen(charptr);
	string_container = (char*)calloc(_length + 1, 1);

	memcpy(string_container, charptr, _length);
}

string::string(const string& str) {
	_length = str.length();
	string_container = (char*)calloc(_length + 1, 1);

	memcpy(string_container, str.c_str(), _length);
}

string::~string() {
	free(string_container);
}

const char *string::c_str() const {
	return string_container;
}

char *string::data() const {
	return string_container;
}

void string::Append(const char* charptr) {
	auto append__length = strlen(charptr);

	string_container = (char*)realloc(string_container, _length + append__length + 1);

	memcpy(string_container + _length, charptr, append__length);

	_length += append__length;

	string_container[_length] = 0;
}

void string::Append(const string &str) {
	Append(str.c_str());
}

void string::Append(char character) {
	string_container = (char*)realloc(string_container, _length + 2);

	string_container[_length] = character;
	string_container[_length + 1] = 0;

	_length++;
}

void string::resize(size_t size) {
	string_container = (char*)realloc(string_container, size + 1);

	_length = size;
}

bool string::empty() const {
	return _length == 0;
}

char* string::begin() const {
	return string_container;
}

char* string::end() const {
	return string_container + _length;
}

string& string::operator=(const string& str) {
	_length = str.length();
	
	free(string_container);

	string_container = (char*)calloc(_length + 1, 1);
	memcpy(string_container, str.c_str(), _length);
	
	return *this;
}

string& string::operator+(const char* charptr) {
	this->Append(charptr);

	return *this;
}

string& string::operator+=(const char* charptr) {
	this->Append(charptr);

	return *this;
}

string& string::operator+=(const string& str) {
	this->Append(str.string_container);

	return *this;
}

char string::operator[](int index) {
	if(index < 0 || index >= _length) {
		return 0;
	}

	return string_container[index];
}

bool string::operator==(const char* charptr) {
	return strcmp(c_str(), charptr) == 0;
}

bool string::operator==(const string& string) {
	return strcmp(c_str(), string.c_str()) == 0;
}

bool string::operator!=(const char* charptr) {
	return strcmp(c_str(), charptr) != 0;
}

size_t string::length() const {
	return _length;
}

size_t string::find(const char* s, size_t pos) const {
	// idk what pos means
	auto a = strstr(data(), s);

	if(a == NULL) {
		return (size_t)-1;
	}

	return (size_t)(a - data());
}


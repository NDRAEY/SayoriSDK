//
// Created by ndraey on 11.01.24.
//

#pragma once

#include "memory.hpp"

namespace std {
class string {
public:
    String();
    String(const char* charptr);
    String(const String& str);
    ~String();

    [[nodiscard]] char * begin() const;
    [[nodiscard]] char * end() const;

    const char* AsCharPtr() const;
    void Append(const String &str);
    void Append(const char *charptr);
    void Append(char character);
    String Slice(int start = 0, int sting_length = -1);

    static String FromInt(int number, int base = 10);
    static String FromUInt(size_t number, int base, bool uppercase = false);

    static String Format(const char* format, ...);
    static String FormatVaArgs(const char *format, va_list args);

    String& operator =(const char* charptr);
    String& operator +(const char* charptr);
    String& operator +=(const char* charptr);
    String& operator +=(const String& str);
    char operator[](int index);

private:
    char* string_container = nullptr;
    int length = 0;
};

}

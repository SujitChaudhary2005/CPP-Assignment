//Program to implement an overloading + operator to concatenate two strings
#include <iostream>
using namespace std;

class String {
private:
    char* str;
    int length;

public:
    String(const char* s = "") {
        length = strlen(s);
        str = new char[length + 1];
        strcpy(str, s);
    }

    String(const String& other) {
        length = other.length;
        str = new char[length + 1];
        strcpy(str, other.str);
    }

    ~String() {
        delete[] str;
    }

    String& operator=(const String& other) {
        if (this == &other) return *this;
        delete[] str;
        length = other.length;
        str = new char[length + 1];
        strcpy(str, other.str);
        return *this;
    }

    String operator+(const String& other) const {
        char* temp = new char[length + other.length + 1];
        strcpy(temp, str);
        strcat(temp, other.str);
        String result(temp);
        delete[] temp;
        return result;
    }

    friend ostream& operator<<(ostream& os, const String& s);

private:
    static int strlen(const char* s) {
        int len = 0;
        while (s[len] != '\0') ++len;
        return len;
    }

    static void strcpy(char* dest, const char* src) {
        while ((*dest++ = *src++));
    }

    static void strcat(char* dest, const char* src) {
        while (*dest) ++dest;
        while ((*dest++ = *src++));
    }
};

ostream& operator<<(ostream& os, const String& s) {
    os << s.str;
    return os;
}

int main() {
    String str1("Hello, ");
    String str2("World!");

    String result = str1 + str2;
    cout << result << endl;

    return 0;
}
#pragma once
#include <iostream>
using namespace std;

class String {
	const char* str = new char[255];
public:
	String();
	String(const char* s);
	int GetLength(char* str);
	void Clear();
	const char* operator=(const char*& str);
	void Show();
	bool operator== (const char*& str);
	bool operator!= (const char*& str);
	bool operator+ (const char*& str);
	~String();
};

String::String() :str{ nullptr } {}
String::String(const char* s) :str{ s } {}
int String::GetLength(char* str) { return strlen(str); };
void String::Clear() { str = nullptr; };
const char* String::operator=(const char*& str) {
	return this->str = str;
}
void String::Show() {
	cout << str << endl;
}
bool String::operator== (const char*& str) {
	return this->str == str;
}
bool String::operator!= (const char*& str) {
	return this->str != str;
}
bool String::operator+ (const char*& str) {
	return strcat_s((char*)this->str, strlen(str), str);
}
String::~String() { delete str; }
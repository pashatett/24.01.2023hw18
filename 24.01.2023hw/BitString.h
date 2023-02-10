#pragma once
#include <iostream>
using namespace std;

class BitString {
	string str;
public:
	BitString();
	BitString(string s);
	void Show();
	string operator+(string& a);
	bool operator==(string& a);
	bool operator!=(string& a);
	~BitString() { str = ""; }
};

BitString::BitString() :str{ "" } {}
BitString::BitString(string s){
	string c = "10";
	string temp = s;
	for (char f : c) {
		temp.erase(remove(temp.begin(), temp.end(), f), temp.end());
	}
	if (temp.length() > 0) {
		str = "";
	}
	else
		str = s;
}

void BitString::Show() {
	if (str == "")cout << "str is empty";
	cout << str << endl;	
}

string BitString::operator+(string& a) {
	return str + a;
}
bool BitString::operator==(string& a) {
	return str == a;
}
bool BitString::operator!=(string& a) {
	return str != a;
}

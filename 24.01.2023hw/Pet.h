#pragma once
#include <iostream>
using namespace std;

class Animal {
protected:
	string type;
	string name;
	string sound;
	int height = 0;
	int weight = 0;
public:
	virtual void Type() {
		cout << type;
	}
	virtual void Sound() {
		cout << sound;
	}
	virtual void Show() {
		cout << name;
	}
	Animal(string c, string f, string s, int a, int b) {
		type = c;
		name = f;
		sound = s;
		height = a;
		weight = b;
	}
};

class Hamster :public Animal {
public:
	Hamster(string c, string f, string s, int a, int b) :Animal(c, f, s, a, b) {}
	virtual void Sound() {
		cout << "homachok says: " << sound;
	}
	virtual void Show() {
		cout << "homachaka klichut: " << name;
	}
	virtual void Type() {
		cout << "porodistiy(aya) " << type;
	}
};

class Dog :public Animal {
public:
	Dog(string c, string f, string s, int a, int b) :Animal(c, f, s, a, b) {}
	virtual void Sound() {
		cout << "bobik says:" << sound;
	}
	virtual void Type() {
		cout << "tip " << name << " :" << type;
	}
	virtual void Show() {
		cout << "pogonyalo: " << name;
	}
};

class Cat :public Animal {
public:
	Cat(string c, string f, string s, int a, int b) :Animal(c, f, s, a, b) {}
	virtual void Sound() {
		cout << "cat says: " << sound;
	}
	virtual void Show() {
		cout << "cat klichut: " << name;
	}
	virtual void Type() {
		cout << "tip " << name << " :" << type;
	}

};

class Parret :public Animal {
public:
	Parret(string c, string f, string s, int a, int b) :Animal(c, f, s, a, b) {}
	virtual void Sound() {
		cout << "popugai  says: " << sound;
	}
	virtual void Show() {
		cout << "popugai klichut: " << name;
	}
	virtual void Type() {
		cout << "popugai " << name << " :" << type;
	}

};
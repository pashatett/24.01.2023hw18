#pragma once
#include <iostream>
using namespace std;

class Pet {
protected:
	string name;//имя
	string voice;//голос
	string type;//тип
	int F;//вес
};

class Dog : Pet{
	Dog(string name, string voice, string type, int F){
		this->name = name;
		this->voice = voice;
		this->type = type;
	}
};

class Cat : Pet {

};

class Parrot : Pet {

};
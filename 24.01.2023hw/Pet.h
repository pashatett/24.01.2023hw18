#pragma once
#include <iostream>
using namespace std;

class Pet {
protected:
	string name;//���
	string voice;//�����
	string type;//���
	int F;//���
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
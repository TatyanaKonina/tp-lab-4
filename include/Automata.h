#pragma once
#ifndef AUTOMATA_H
#define AUTOMATA_H
#include <iostream>
#include <map>


using namespace std;
const map <string, int> menu = { {"Milk"   , 10},
								{"Water"  ,  5},
								{ "Tea"   , 30},
								{"Coffee" , 40},
								{"Cola"   , 50} };
//const vector <string> menu = { "Milk","Water","Tea", "Coffee","Cola" };
enum States {
	OFF,
	WAIT,
	ACCEPT,
	CHECK,
	COOK,
	//ERROR, 
	//FINISH
};



class Automata {
private:
	
	int money;
	States state;
	map<string,int> menu;
public:
    Automata();
	void setMenu();
	void on();
	void off();
	void coin();
	void getMenu();
	void getState();
	void choice();
	void cancel();
	void cook();
	void finish();
};
#endif 

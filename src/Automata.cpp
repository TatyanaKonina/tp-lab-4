#include <iostream>
#include <map>
#include "Automata.h"
static string endL = "\n";
// const map <string, int> menu = {{"Milk"   , 10},
//								{"Water"  ,  5},
//	                            { "Tea"   , 30}, 
//	                            {"Coffee" , 40},
//	                            {"Cola"   , 50}};
//enum States {
//	OFF, 
//	WAIT,
//	ACCEPT,
//	CHECK, 
//	COOK, 
//	//ERROR, 
//	//FINISH
//};


Automata::Automata() {
	this->state = OFF;
	this->money = 0;
	setMenu();
	cout << "# Automata created" << endL;
}
void Automata::setMenu() {
	this->menu = { {"Milk"   , 10},
				   {"Water"  ,  5},
				   { "Tea"   , 30},
				   {"Coffee" , 40},
				   {"Cola"   , 50} };
}
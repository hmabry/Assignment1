#include <string>
#include "Weapon.h"
#include <iostream>
#include <random>

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H
using namespace std;


	
class CrazyRandomSword : public Weapon {
public:

    CrazyRandomSword() : Weapon("Crazy random sword", 29) 
	{
		/*
		//random number generation technique below found on StackOverflow
		std::random_device rd;
		std::mt19937 gen( rd());
		std::uniform_int_distribution<> dis(7, 100);
		double rando = dis(gen);*/
    }

    virtual ~CrazyRandomSword() {};

    virtual double hit(double armor);


};

#endif /* CRAZYRANDOMSWORD_H */ 

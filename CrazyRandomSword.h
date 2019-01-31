#include <string>
#include "Weapon.h"
#include <iostream>
#include <random>

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H
using namespace std;

//random number generation technique below found on StackOverflow


class CrazyRandomSword : public Weapon {
public:

    CrazyRandomSword() : Weapon("Crazy random sword", 25) 
	{
    }

    virtual ~CrazyRandomSword() {};

    virtual double hit(double armor);


};

#endif /* CRAZYRANDOMSWORD_H */ 

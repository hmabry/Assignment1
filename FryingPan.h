#include <string>
#include "Weapon.h"
#include <iostream>

#ifndef FRYINGPAN_H
#define FRYINGPAN_H

using namespace std;
class FryingPan : public Weapon {
public:

    FryingPan() : Weapon("Frying pan", 25) 
	{
    }

    virtual ~FryingPan() {};

    virtual double hit(double armor);


};

#endif /* FRYINGPAN_H */ 
 

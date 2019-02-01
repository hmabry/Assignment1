#include <string>
#include <stdio.h> 
#include "Weapon.h"
#include <iostream>
#include <cstdlib>
#include <stdlib.h>

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

class CrazyRandomSword : public Weapon {
public:
	//added rando to the initialization list of CrazyRandomSword in order to pass a random number without multiple definitions 
    CrazyRandomSword(double rando) : Weapon("Crazy random sword", rando)
	{
		
    }

    virtual ~CrazyRandomSword() {};

    virtual double hit(double armor);


};

#endif /* CRAZYRANDOMSWORD_H */ 

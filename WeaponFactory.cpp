/* 
 * File:   WeaponFactory.cpp
 * Author: Javier <jrescobara@gmail.com>
 *  
 */ 

#include <string>
#include <stddef.h> 
#include "WeaponFactory.h"
#include "CommonSword.h" 
#include "CommonSpear.h"
#include "SimpleHammer.h"
#include "CrazyRandomSword.h"
#include "FryingPan.h" 

WeaponFactory* WeaponFactory::instance = NULL;

WeaponFactory * WeaponFactory::getInstance() {
    if (!instance) {
        instance = new WeaponFactory();
    }
    return instance;
}

Weapon * WeaponFactory::getWeapon(std::string name) {
	
	
	
    if (name.compare("sword") == 0) {
        return new CommonSword();
    }
    
    if (name.compare("spear") == 0) {
        return new CommonSpear();
    }
	
	if (name.compare("hammer") == 0) {
        return new SimpleHammer();
    }
	
	if (name.compare("random") == 0) {
		//random number generation technique below found on StackOverflow
		std::random_device rd;
		std::mt19937 gen( rd());
		std::uniform_int_distribution<> dis(7, 100);
		double rando = dis(gen);
		
		//passing random number into random sword constructor
        return new CrazyRandomSword(rando);
    }
	
	if (name.compare("pan") == 0) {
        return new FryingPan();
    }
	
    throw "Invalid weapon";
}
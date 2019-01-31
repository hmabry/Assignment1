#include "SimpleHammer.h" 

double SimpleHammer::hit(double armor) {

	double damage = hitPoints - armor;
	if (armor < 30){
		double damage = hitPoints;
		return damage;
	}

	if (armor >= 30){
		double damage = hitPoints - armor;
		return damage;
	}
	
    if (damage < 0) {
        return 0;
    }
	
    return damage;
}

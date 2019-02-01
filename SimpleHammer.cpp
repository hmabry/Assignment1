#include "SimpleHammer.h" 

double SimpleHammer::hit(double armor) {

	//if armor is below 30, ignore armor
	if (armor < 30){
		double damage = hitPoints;
		if (damage < 0)
			damage = 0;

		return damage;
	}

	//if armor is 30 or above, it doesn't ignore armor points -> deducts armor from total damage 
	if (armor >= 30){
		double damage = hitPoints - armor;
		if (damage < 0)
			return 0;
		else
			return damage;
	}

}

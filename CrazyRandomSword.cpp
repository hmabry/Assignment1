#include "CrazyRandomSword.h" 

double CrazyRandomSword::hit(double armor) {
	//random number generation technique below found on StackOverflow
	std::random_device rd;
	std::mt19937 gen( rd());
	std::uniform_int_distribution<> dis(2, (0.33 * armor));
	double ignore = dis(gen);
	
	double damage = hitPoints + ignore - armor;
	
    if (damage < 0) {
        return 0;
    }
	
    return damage;
}
 

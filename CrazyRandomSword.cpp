#include "CrazyRandomSword.h" 

std::random_device rd;
std::mt19937 gen( rd());
std::uniform_int_distribution<> dis(7, 100);
double rando = dis(gen);

double CrazyRandomSword::hit(double armor) {
	
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
 

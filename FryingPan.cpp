#include "FryingPan.h" 

double FryingPan::hit(double armor) { 
	
	//If the armor is > 50, deal damage equal to the armor
	//If it's below 50 but over 0, do damage equal to twice the hitpoints
	if (armor > 50){
		double damage = armor;	
		return damage;
	}
	if (armor <= 50 && armor > 0){
		double damage = hitPoints * 2;	
		return damage;		
	}
	
}
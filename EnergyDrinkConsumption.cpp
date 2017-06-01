#include "EnergyDrinkConsumption.h"
#include <iostream>
/*
	A soft drink company recently surveyed 16,500 of its customers and found that approximately 15 percent of those surveyed purchase one or more energy drinks per week. Of those customers who purchase energy drinks, approximately 58 percent of them perfer citrus-flavored energy drinks. Write a program that displays the following:
	
	--> The approximate number of customers in the survey who purchase one or more energy drinks per week
	--> The approximate number of customers in the survey who prefer citrus-flavored energy drinks
	*/
EnergyDrinkConsumption::EnergyDrinkConsumption()
{
  // Constants
  const int CUSTOMERS = 16500;
  
  // Variables
  double weeklyPercent = .15; // amount of customers that purchase one or more energy drinks a week.
  double customerPercent = .58; // Number of customers that perfer citrus-flavored energy drinks.
  double approximate; // approximate number of people who purchase one or more energy drinks
  double approximateCitrusDrinks; // approximate number of people who perfer citrus energy drinks.
  
  // Calculate the approximate number of customers who get one or more energy drinks a week.
  approximate = CUSTOMERS * weeklyPercent;
  
  std::cout << "Out of the " << CUSTOMERS << " surveyed, approximately " << approximate << " purchases one or more energy drinks a week." << std::endl;
  
  std::cout << "Of those " << approximate << " customers ";
  
  // Calculate the number of customers that perfered to have a citrus flavored energy drink
  approximateCitrusDrinks = approximate * customerPercent;
  
  std::cout << approximateCitrusDrinks << " perfered to have a citrus flavored energy drink." << std::endl;
}

EnergyDrinkConsumption::~EnergyDrinkConsumption()
{
  std::cout << "\n";
}

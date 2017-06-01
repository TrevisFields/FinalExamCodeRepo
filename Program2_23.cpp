#include "Program2_23.h"
#include <iostream>
using namespace std;

Program2_23::Program2_23()
{
  cout << "Program 2.23\n";
  
  // Variables to hold the regular price, the amount of a discount, and the sale price.
  double regularPrice = 59.95, discount, salesPrice;
  
  // Calculate the amount of a 20% discount.
  discount = regularPrice * 0.2;
  
  // Calculate the sales price by subtracting the discount from the regular price.
  salesPrice = regularPrice - discount;
  
  // Display the results.
  cout << "Regular price: $" << regularPrice << endl;
  cout << "Discount amount: $" << discount << endl;
  cout << "Sales price: $" << salesPrice << endl;
}

Program2_23::~Program2_23()
{
  cout << "Program 2.23 calculates the sales price of an item that is regularly priced at $59.95, with a 20 percent discount subtracted.\n";
  getchar();
}

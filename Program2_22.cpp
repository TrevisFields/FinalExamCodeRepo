#include "Program2_22.h"
#include <iostream>
using namespace std;

Program2_22::Program2_22()
{
  cout << "Program 2.22\n";
  
  // Variables to hold the monthly pay and the amount of contribution
  double monthlyPay = 6000.00, contribution;
  
  // Calculate and display a 5% contribution.
  contribution = monthlyPay * 0.05;
  cout << "5 percent is $" << contribution << " per month.\n";
  
  // Calculate and display a 7% contribution.
  contribution = monthlyPay * 0.07;
  cout << "7 percent is $" << contribution << " per month.\n";
  
  // Calculate and display a 10% contribution.
  contribution = monthlyPay * 0.1;
  cout << "10 percent is $" << contribution << " per month.\n";
}

Program2_22::~Program2_22()
{
  cout << "Program 2.22 calculates the amount of pay that will be contributed to a retirement plan if 5%, 7%, and 10% of monthly pay is withheld.\n";
  getchar();
}

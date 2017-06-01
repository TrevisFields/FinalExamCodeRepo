  //Trevis Fields
  //CIS 17A
  //Last Modified: 6/01/17
/*
 --> EACH OF THE HEADER AND CPP FILES WITH THE SAME CORRESPONDING NAMES ARE INDIVIDUAL PROGRAMS FROM THE CHAPTER
 --> THERE WILL ONLY BE ONE MAIN FUNCTION THAT RUNS ALL OF THE PROGRAMS
 --> THERE MAY BE TOPICS FROM FUTURE CHAPTERS USED TO ALLOW EACH PROGRAM TO RUN BUT JUST FOLLOW ALONG STEP BY STEP
 */
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "Program2_1.h"
#include "Program2_2.h"
#include "Program2_3.h"
#include "Program2_4.h"
#include "Program2_5.h"
#include "Program2_6.h"
#include "Program2_7.h"
#include "Program2_8.h"
#include "Program2_9.h"
#include "Program2_10.h"
#include "Program2_11.h"
#include "Program2_12.h"
#include "Program2_13.h"
#include "Program2_14.h"
#include "Program2_15.h"
#include "Program2_16.h"
#include "Program2_17.h"
#include "Program2_18.h"
#include "Program2_19.h"
#include "Program2_21.h"
#include "Program2_22.h"
#include "Program2_23.h"
#include "Program2_24.h"
#include "Program2_25.h"
#include "Program2_28.h"
#include "Program2_29.h"
#include "Program2_30.h"
#include "EnergyDrinkConsumption.h"
using namespace std;

void EndOfChapterRepeat();
void MenuList();
int main()
{ // Opening of Main Function
  int run;
  do{ // Outer most Do/While loop opening brace
  cout << "Please select a choice to view a chapter you would like to review. at the end of each running chapter is a program i attempted to write myself.\n";
  cout << "Menu\n";
  cout << "1) Chapter 2\n";
  cout << "2) Chapter 3\n";
  cout << "3) Chapter 4\n";
  cout << "4) Chapter 5\n";
  cout << "5) Chapter 6\n";
  cout << "6) Chapter 7\n";
  cout << "7) Chapter 8\n";
  cout << "8) Chapter 9\n";
  cout << "9) Chapter 10\n";
  cout << "10) Chapter 11\n";
  cout << "11) Chapter 12\n";
  cout << "12) Chapter 13\n";
  cout << "13) Chapter 14\n";
  cout << "14) Chapter 15\n";
  cout << "15) Chapter 16\n";
  cout << "16) Chapter 17\n";
  cout << "17) Chapter 18\n";
  cout << "18) Chapter 19\n";
  cout << "19) Chapter 20\n";
  
  int choice;
  cin >> choice;
  switch(choice)
  {
  		case 1:
		{ // Opening brace for case 1
	  int selection;
	  do
	  { // opening brace of do/while loop
		 { //opening brace inside do/while loop
  		// --> THREE DIFFERENT EXAMPLES ON HOW TO WRITE A SIMPLE C++ PROGRAM USING ANY COMPILER
		// --> MODIFIED TO USE SOME MORE ADVANCED COMPILING TOPICS
		cout << setw(40) << "Chapter Program Constructors.\n";
  		Program2_1 programing2_1;
  		getchar();
		// -->
		Program2_2 programming2_2;
  		getchar();
		// -->
		Program2_3 programming2_3;
  		getchar();
  		// -->
 		 Program2_4 programming2_4;
  		getchar();
  		// -->
  		Program2_5 programming2_5;
		getchar();
  		// -->
		Program2_6 programmig2_6;
		getchar();
  		// -->
  		Program2_7 programming2_7;
  		getchar();
  		// -->
  		Program2_8 programming2_8;
  		getchar();
  		// -->
  		Program2_9 programming2_9;
  		getchar();
  		// -->
  		Program2_10 programming2_10;
  		getchar();
  		// -->
  		Program2_11 programming2_11;
  		getchar();
  		// -->
		Program2_12 programming2_12;
  		getchar();
  		// -->
  		Program2_13 programming2_13;
  		getchar();
  		// -->
  		Program2_14 programming2_14;
  		getchar();
  		// -->
  		Program2_15 programming2_15;
  		getchar();
  		// -->
  		Program2_16 programming2_16;
  		getchar();
  		// -->
  		Program2_17 programming2_17;
  		getchar();
  		// -->
  		Program2_18 programming2_18;
  		getchar();
  		// -->
  		Program2_19 programming2_19;
  		getchar();
  		// -->
  		Program2_21 programming2_21;
  		getchar();
  		// -->
  		Program2_22 programming2_22;
  		getchar();
  		// -->
  		Program2_23 programming2_23;
  		getchar();
  		// -->
  		Program2_24 programming2_24;
  		getchar();
  		// -->
  		Program2_25 programming2_25;
  		getchar();
  		// -->
  		Program2_28 programming2_28;
  		getchar();
  		// -->
  		Program2_29 programming2_29;
  		getchar();
  		// -->
  		Program2_30 programming2_30;
  		getchar();
  		// -->
  		EnergyDrinkConsumption drink1;
		cout << "\n" << setw(40) << "Now displaying Destructors.\n";
	 	} //Closing brace inside of do/while loop
		 EndOfChapterRepeat(); //displays before call to destructor
		 cin >> selection;
			cout << "Enter an integer to continue.\n";
		 system("cls");
	  }while(selection != 0); //end of do while loop inside of case 1
		}// closing brace for case 1
  		break;
		  //Case 2 Chapter 3
  	case 2:
		{ // Opening brace for case 2
		  int selection;
		  do
		  { // opening brace of do/while loop
			 { //opening brace inside do/while loop
				cout << setw(40) << "Chapter Program Constructors.\n";
				  // --> FILL IN WITH CODE FROM CHAPTER 3
				cout << "\n" << setw(40) << "Now displaying Destructors.\n";
			 } //Closing brace inside of do/while loop
			 EndOfChapterRepeat(); //displays before call to destructor
			 cin >> selection;
			 cout << "Enter an integer to continue.\n";
			 system("cls");
		  }while(selection != 0); //end of do while loop inside of case 2
		}// closing brace for case 2
		break;
		
		case 3:
		{ // Opening brace for case 2
		  int selection;
		  do
		  { // opening brace of do/while loop
			 { //opening brace inside do/while loop
				cout << setw(40) << "Chapter Program Constructors.\n";
				  // --> FILL IN WITH CODE FROM CHAPTER 4
				cout << "\n" << setw(40) << "Now displaying Destructors.\n";
			 } //Closing brace inside of do/while loop
			 EndOfChapterRepeat(); //displays before call to destructor
			 cin >> selection;
			 cout << "Enter an integer to continue.\n";
			 system("cls");
		  }while(selection != 0); //end of do while loop inside of case 2
		}// closing brace for case 2
		break;
		
		case 4:
		{ // Opening brace for case 2
		  int selection;
		  do
		  { // opening brace of do/while loop
			 { //opening brace inside do/while loop
				cout << setw(40) << "Chapter Program Constructors.\n";
				  // --> FILL IN WITH CODE FROM CHAPTER 4
				cout << "\n" << setw(40) << "Now displaying Destructors.\n";
			 } //Closing brace inside of do/while loop
			 EndOfChapterRepeat(); //displays before call to destructor
			 cin >> selection;
			 cout << "Enter an integer to continue.\n";
			 system("cls");
		  }while(selection != 0); //end of do while loop inside of case 2
		}// closing brace for case 2
		break;

		case 5:
		{ // Opening brace for case 2
		  int selection;
		  do
		  { // opening brace of do/while loop
			 { //opening brace inside do/while loop
				cout << setw(40) << "Chapter Program Constructors.\n";
				  // --> FILL IN WITH CODE FROM CHAPTER 4
				cout << "\n" << setw(40) << "Now displaying Destructors.\n";
			 } //Closing brace inside of do/while loop
			 EndOfChapterRepeat(); //displays before call to destructor
			 cin >> selection;
			 cout << "Enter an integer to continue.\n";
			 system("cls");
		  }while(selection != 0); //end of do while loop inside of case 2
		}// closing brace for case 2
		break;
		
		case 6:
		{ // Opening brace for case 2
		  int selection;
		  do
		  { // opening brace of do/while loop
			 { //opening brace inside do/while loop
				cout << setw(40) << "Chapter Program Constructors.\n";
				  // --> FILL IN WITH CODE FROM CHAPTER 4
				cout << "\n" << setw(40) << "Now displaying Destructors.\n";
			 } //Closing brace inside of do/while loop
			 EndOfChapterRepeat(); //displays before call to destructor
			 cin >> selection;
			 cout << "Enter an integer to continue.\n";
			 system("cls");
		  }while(selection != 0); //end of do while loop inside of case 2
		}// closing brace for case 2
		break;

	 case 7:
		{ // Opening brace for case 2
		  int selection;
		  do
		  { // opening brace of do/while loop
			 { //opening brace inside do/while loop
				cout << setw(40) << "Chapter Program Constructors.\n";
				  // --> FILL IN WITH CODE FROM CHAPTER 4
				cout << "\n" << setw(40) << "Now displaying Destructors.\n";
			 } //Closing brace inside of do/while loop
			 EndOfChapterRepeat(); //displays before call to destructor
			 cin >> selection;
			 cout << "Enter an integer to continue.\n";
			 system("cls");
		  }while(selection != 0); //end of do while loop inside of case 2
		}// closing brace for case 2
		break;

		case 8:
		{ // Opening brace for case 2
		  int selection;
		  do
		  { // opening brace of do/while loop
			 { //opening brace inside do/while loop
				cout << setw(40) << "Chapter Program Constructors.\n";
				  // --> FILL IN WITH CODE FROM CHAPTER 4
				cout << "\n" << setw(40) << "Now displaying Destructors.\n";
			 } //Closing brace inside of do/while loop
			 EndOfChapterRepeat(); //displays before call to destructor
			 cin >> selection;
			 cout << "Enter an integer to continue.\n";
			 system("cls");
		  }while(selection != 0); //end of do while loop inside of case 2
		}// closing brace for case 2
		break;

		case 9:
		{ // Opening brace for case 2
		  int selection;
		  do
		  { // opening brace of do/while loop
			 { //opening brace inside do/while loop
				cout << setw(40) << "Chapter Program Constructors.\n";
				  // --> FILL IN WITH CODE FROM CHAPTER 4
				cout << "\n" << setw(40) << "Now displaying Destructors.\n";
			 } //Closing brace inside of do/while loop
			 EndOfChapterRepeat(); //displays before call to destructor
			 cin >> selection;
			 cout << "Enter an integer to continue.\n";
			 system("cls");
		  }while(selection != 0); //end of do while loop inside of case 2
		}// closing brace for case 2
		break;

		case 10:
		{ // Opening brace for case 2
		  int selection;
		  do
		  { // opening brace of do/while loop
			 { //opening brace inside do/while loop
				cout << setw(40) << "Chapter Program Constructors.\n";
				  // --> FILL IN WITH CODE FROM CHAPTER 4
				cout << "\n" << setw(40) << "Now displaying Destructors.\n";
			 } //Closing brace inside of do/while loop
			 EndOfChapterRepeat(); //displays before call to destructor
			 cin >> selection;
			 cout << "Enter an integer to continue.\n";
			 system("cls");
		  }while(selection != 0); //end of do while loop inside of case 2
		}// closing brace for case 2
		break;

		case 11:
		{ // Opening brace for case 2
		  int selection;
		  do
		  { // opening brace of do/while loop
			 { //opening brace inside do/while loop
				cout << setw(40) << "Chapter Program Constructors.\n";
				  // --> FILL IN WITH CODE FROM CHAPTER 4
				cout << "\n" << setw(40) << "Now displaying Destructors.\n";
			 } //Closing brace inside of do/while loop
			 EndOfChapterRepeat(); //displays before call to destructor
			 cin >> selection;
			 cout << "Enter an integer to continue.\n";
			 system("cls");
		  }while(selection != 0); //end of do while loop inside of case 2
		}// closing brace for case 2
		break;

		case 12:
		{ // Opening brace for case 2
		  int selection;
		  do
		  { // opening brace of do/while loop
			 { //opening brace inside do/while loop
				cout << setw(40) << "Chapter Program Constructors.\n";
				  // --> FILL IN WITH CODE FROM CHAPTER 4
				cout << "\n" << setw(40) << "Now displaying Destructors.\n";
			 } //Closing brace inside of do/while loop
			 EndOfChapterRepeat(); //displays before call to destructor
			 cin >> selection;
			 cout << "Enter an integer to continue.\n";
			 system("cls");
		  }while(selection != 0); //end of do while loop inside of case 2
		}// closing brace for case 2
		break;

		case 13:
		{ // Opening brace for case 2
		  int selection;
		  do
		  { // opening brace of do/while loop
			 { //opening brace inside do/while loop
				cout << setw(40) << "Chapter Program Constructors.\n";
				  // --> FILL IN WITH CODE FROM CHAPTER 4
				cout << "\n" << setw(40) << "Now displaying Destructors.\n";
			 } //Closing brace inside of do/while loop
			 EndOfChapterRepeat(); //displays before call to destructor
			 cin >> selection;
			 cout << "Enter an integer to continue.\n";
			 system("cls");
		  }while(selection != 0); //end of do while loop inside of case 2
		}// closing brace for case 2
		break;

		case 14:
		{ // Opening brace for case 2
		  int selection;
		  do
		  { // opening brace of do/while loop
			 { //opening brace inside do/while loop
				cout << setw(40) << "Chapter Program Constructors.\n";
				  // --> FILL IN WITH CODE FROM CHAPTER 4
				cout << "\n" << setw(40) << "Now displaying Destructors.\n";
			 } //Closing brace inside of do/while loop
			 EndOfChapterRepeat(); //displays before call to destructor
			 cin >> selection;
			 cout << "Enter an integer to continue.\n";
			 system("cls");
		  }while(selection != 0); //end of do while loop inside of case 2
		}// closing brace for case 2
		break;
		
		case 15:
		{ // Opening brace for case 2
		  int selection;
		  do
		  { // opening brace of do/while loop
			 { //opening brace inside do/while loop
				cout << setw(40) << "Chapter Program Constructors.\n";
				  // --> FILL IN WITH CODE FROM CHAPTER 4
				cout << "\n" << setw(40) << "Now displaying Destructors.\n";
			 } //Closing brace inside of do/while loop
			 EndOfChapterRepeat(); //displays before call to destructor
			 cin >> selection;
			 cout << "Enter an integer to continue.\n";
			 system("cls");
		  }while(selection != 0); //end of do while loop inside of case 2
		}// closing brace for case 2
		break;

		case 16:
		{ // Opening brace for case 2
		  int selection;
		  do
		  { // opening brace of do/while loop
			 { //opening brace inside do/while loop
				cout << setw(40) << "Chapter Program Constructors.\n";
				  // --> FILL IN WITH CODE FROM CHAPTER 4
				cout << "\n" << setw(40) << "Now displaying Destructors.\n";
			 } //Closing brace inside of do/while loop
			 EndOfChapterRepeat(); //displays before call to destructor
			 cin >> selection;
			 cout << "Enter an integer to continue.\n";
			 system("cls");
		  }while(selection != 0); //end of do while loop inside of case 2
		}// closing brace for case 2
		break;

	 case 17:
		{ // Opening brace for case 2
		  int selection;
		  do
		  { // opening brace of do/while loop
			 { //opening brace inside do/while loop
				cout << setw(40) << "Chapter Program Constructors.\n";
				  // --> FILL IN WITH CODE FROM CHAPTER 4
				cout << "\n" << setw(40) << "Now displaying Destructors.\n";
			 } //Closing brace inside of do/while loop
			 EndOfChapterRepeat(); //displays before call to destructor
			 cin >> selection;
			 cout << "Enter an integer to continue.\n";
			 system("cls");
		  }while(selection != 0); //end of do while loop inside of case 2
		}// closing brace for case 2
		break;

		case 18:
		{ // Opening brace for case 2
		  int selection;
		  do
		  { // opening brace of do/while loop
			 { //opening brace inside do/while loop
				cout << setw(40) << "Chapter Program Constructors.\n";
				  // --> FILL IN WITH CODE FROM CHAPTER 4
				cout << "\n" << setw(40) << "Now displaying Destructors.\n";
			 } //Closing brace inside of do/while loop
			 EndOfChapterRepeat(); //displays before call to destructor
			 cin >> selection;
			 cout << "Enter an integer to continue.\n";
			 system("cls");
		  }while(selection != 0); //end of do while loop inside of case 2
		}// closing brace for case 2
		break;

		case 19:
		{ // Opening brace for case 2
		  int selection;
		  do
		  { // opening brace of do/while loop
			 { //opening brace inside do/while loop
				cout << setw(40) << "Chapter Program Constructors.\n";
				  // --> FILL IN WITH CODE FROM CHAPTER 4
				cout << "\n" << setw(40) << "Now displaying Destructors.\n";
			 } //Closing brace inside of do/while loop
			 EndOfChapterRepeat(); //displays before call to destructor
			 cin >> selection;
			 cout << "Enter an integer to continue.\n";
			 system("cls");
		  }while(selection != 0); //end of do while loop inside of case 2
		}// closing brace for case 2
		break;

		
		default:
		system("cls");
		system("clear");
		cout << "Invalid selection. Please choose from the menu list or Press 0 to Exit.\n";
		MenuList();
  }//End of Switch Statments
	 cout << "Enter any interger to display the menu or -1 to exit.\n";
	 cin >> run;
  }while(run != -1); // outer most Do/While loop closing brace
} // End of Main Function

void EndOfChapterRepeat() // Used for do/while loop with selection input
{
  cout << "Would you like to repeat this chapter?\n";
  cout << "1) to repeat.\n";
  cout << "0) to exit.\n";
}

void MenuList() // Used in choice input
{
  cout << "Menu\n";
  cout << "1) Chapter 2\n";
  cout << "2) Chapter 3\n";
  cout << "3) Chapter 4\n";
  cout << "4) Chapter 5\n";
  cout << "5) Chapter 6\n";
  cout << "6) Chapter 7\n";
  cout << "7) Chapter 8\n";
  cout << "8) Chapter 9\n";
  cout << "9) Chapter 10\n";
  cout << "10) Chapter 11\n";
  cout << "11) Chapter 12\n";
  cout << "12) Chapter 13\n";
  cout << "13) Chapter 14\n";
  cout << "14) Chapter 15\n";
  cout << "15) Chapter 16\n";
  cout << "16) Chapter 17\n";
  cout << "17) Chapter 18\n";
  cout << "18) Chapter 19\n";
  cout << "19) Chapter 20\n";

  

}

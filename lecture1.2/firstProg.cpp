/*
 * This is one possible solution to the exercises in lab
 * Ameet Soni
 * modified by Joshua Brody
 * CPSC 35 Fall 2014
 */
#include <iostream>
#include <string>
using namespace std;

/* Complete the following program to accomplish:
 *  (1) Calculate the height of the user in inches,
 *  (2) Determine if the user is a male or female, and
 *  (3) Output whether the user is above or below average height for their gender.
 *
 * Part of the program has been started for you already.  Good luck!
 */
int main() {
  string name;
  char answer;
//  bool woman;
  // should heightInInches be float?
  int feet, inches, birthYear, heightInInches;
  float avgMale = 69.4, avgFemale = 63.8, avg;

  // declare other variables as needed

  cout << "Enter your first name: ";
  cin >> name;
  cout << "Hello " << name << endl;

  cout << "Enter the year you were born: ";
  cin >> birthYear;
  cout << "You must be about " << 2013-birthYear << " years old." << endl;

  cout << "Enter your height in feet and inches (eg. 5 2): ";
  cin >> feet >> inches;

  cout << "How do you identify yourself (m/f/n)? ";
  cin >> answer;

  heightInInches = (feet * 12) + inches;
  if(answer == 'm') {
    avg = avgMale;
  }
  else if(answer == 'f') {
    avg = avgFemale;
  }
 
  if((answer == 'm') || (answer == 'f')) {
    if(heightInInches > avg) {
      cout << "Greater than average";
    }
    else if(heightInInches < avg) {
      cout << "Less than average";
    }
    else {
      cout << "You are so average.";
    }
  }
  else if(answer == 'n') {
    cout << "This program is antiquated and feels shame.";
    cout << endl;
  }
  else {
    cout << "Invalid input";
  }
  

  return 0; 			// return 0 to indicate success
}


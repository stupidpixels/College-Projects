/*
   *----------------------------------------------------------------------------*
  | Julio Franco González - 801.13.2416                                          |
  | This is a program that converts a temperature that the user chooses to either|
  | Farenheight or Celsius.                                                      |
  | Functions - ConvertF : Converts from Celsius to Farenheight.                 |
  |           - ConvertC : Converts from Farenheight to Celsius.                 |
  | Variables - temp, t                                                          |
   *----------------------------------------------------------------------------*
*/

#include <iostream>
using namespace std;

double convertF(double temp)	// Function to convert from Farenheight to Celsius.
{
    double T = (temp - 32) * 5/9;	// Assign T = farenheight convertion equation.

	return T;	// Return the result.
}

double convertC(double temp)	// Function to convert from Celsius to Farenheight.
	{
		double T = (temp * 1.8) + 32;	// Assign C = celsius convertion equation.

		return T;	// Return the result.
	}

int main()	// Main Function
{	
    double temp;	// Defining the variable temp
    int t;	//	Defining the variable t

	cout << "Enter (1) if you want to convert into Celsius. Enter (2) if you want to convert into Farenheight : " << endl;	// Ask for what the user wants to convert.
	cin >> t;

    cout << "Please enter the temperature you want to convert "  << endl;	// Ask the user for the temperature he wants to convert.
    cin >> temp;
        if (t == 1)	// If the user entered 1 and wants to convert to Farenheight;
        {
            cout << temp <<" in Farenheight is : "<< convertC(temp) << endl;	// Call the tempC function to convert the temperature the user wanted and echo it's result.
            
        }

        else if (t == 2)
        {
            cout << temp <<" in Celsius is : "<< convertF(temp) << endl;		// Call the tempF function to convert the temperature the user wanted and echo it's result.
            
        }

	return 0;
}
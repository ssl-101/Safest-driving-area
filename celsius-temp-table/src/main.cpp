#include <iostream>
#include <iomanip>

using namespace std;

/*global constants used throughout the program*/
const int degreeF_min = 0;
const int degreeF_max = 20;

/* function prototype. This will inform the compiler 
the type of data and function name . no perameters
for this paticular prototype. */
double getCelsius (double fahrenheit);

int main ()
{
    // table title 
    cout<< "Celsius Temperature Table \n";
    cout<< "------------------------- \n";

    // setting up the line up of the display
    cout << setw(11) << "Fahrenheit\n";
    cout << setw(11) << "Celsius" << endl;

    // loop for the temps, min 0 , max 20

    for ( int fahrenheit = degreeF_min; 
           fahrenheit <= degreeF_max;
           fahrenheit ++)
           {double celsius = getCelsius(fahrenheit) ;
            cout << setw(11) << fahrenheit
            << setw(11) << fixed << setprecision(1)
            << celsius << endl;
           }
    return 0;
}

/*function definition that tells the compiler 
what the formula is to correctly display the
answers chart the loop. */
double getCelsius (double fahranheit)
{
    return (5.0/ 9.0) * (fahrenheit - 32);
}
/*This program displays safest region
based on accident amout , compared
between two regions */

#include <iostream>
#include <string>
using namespace std;

//Functions for input , analyze input, display
void getRegionInfo (string& regionName, int& accidents);
// bool will determine true or false
bool isLower (int value1, int value2);
void showLowest ( string regionName, int accidents);

int main()
{
    const int regionAmount = 5;

    string regionName;
    int accidents;

    string regionLow;
    int accidentLow;

    // get first region info
    getRegionInfo (regionName, accidents);
    regionLow = regionName;
    accidentLow = accidents;
    
    //process the rest of the regions
    for (int count =1; count < regionAmount; count ++)
    {
        getRegionInfo (regionName, accidents);

        if (isLower (accidents, accidentLow))
        {
            accidentLow = accidents;
            regionLow = regionName;

        }
    }
     showLowest (regionLow, accidentLow);
    
     return 0;

}


/* post condition validations
returned through perameters*/

void getRegionInfo (string& regionName, int& accidents)
{
    cout << " Enter name of the region: " ;
    getline (cin, regionName);

    cout << "Enter number of accidents: ";
    cin >> accidents ;

    while ( accidents <0 )
    {
        cout << " Error. number must be 0 or greater. \n"  ;
        cout << " Enter number of accidents: " ;
        cin >> accidents;
   }
cin.ignore();

}

/* Preconditions , both values show 
accident count valdates */

bool isLower (int value1, int value2)
{
    return value1 <= value2;

}

/* display the safest region and its accident count.

preconditions: regionName matches to the reagion with
the lowest count of accident.

postconditions: 
results are displayed */

void showLowest (string regionName, int accidents)
{
    cout << "Safest region:" << regionName << endl;
    cout << "Number of Accidents:" << accidents << endl;

}



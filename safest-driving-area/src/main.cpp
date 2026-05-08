/*This program displays safest region
based on accident amout , compared
between two regions */

#include <iostream>
#include <string>
using namespace std;

//Functions for input , analyze input, display
void getRegionInfo (string & regionName, int& accidents);
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
    getRegInfo (regionName, accidents);
    regionLow = regionName;
    accidentLow = accidents;
    
    //process the rest of the regions
    for (int count =1; count < regionAmount; count ++)
    {
        getRegInfo (regionName, accidents);

        if (islower (accidents, accidentLow))
        {
            accidentLow = accidents;
            regionLow = regionName

        }
    }
     showLowest (regionLow, accidentLow);
    
     return 0;

}

/* post condition validations
returned through perameters*/

void getRegInfo (string& regionName, int& accidents)
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
}
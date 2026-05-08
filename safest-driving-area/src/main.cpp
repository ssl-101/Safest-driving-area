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


}

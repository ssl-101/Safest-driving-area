//This program estimates the total paint job cost.
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

//function prototypes
int getRooms();
int gallonsRoom();
double getPricePer();
double getSqft();
void displayEstimate ( double laborCost, double paintCost,
                     int gallons, double laborHours, 
                     double totalCost);

int main ()
{
  int rooms;
  int gallonsNeeded =0;

  double paintPrice;
  double sqft;
  
  double totalsqft =0.0;
  double laborHours;
  double paintCosts;
  double laborCosts;
  double totalcost;

  rooms = getRooms();
  paintPrice = getPricePer();


  for (int count = 1; count <= rooms; count++)
  {
    sqft + getSqft();
    totalsqft += sqft;
    
    gallonsNeeded += gallonsRoom(sqft);
  }
   laborHours = totalsqft * laborHoursPer;
   paintCosts = gallonsNeeded * paintPrice;
   laborCosts = laborHours * laborRate;
   totalcost = paintCosts + laborCosts;

   displayEstimate ( paintCosts, laborCosts, gallonsNeeded, 
                     laborHours, totalCost);

return 0;
}

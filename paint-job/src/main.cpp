//This program estimates the total paint job cost.
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

//function prototypes
int getRooms();
int gallonsRoom();
double getPricePer();
double getsqft();
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
    sqft + getsqft();
    totalsqft += sqft;
    
    gallonsNeeded += gallonsRoom( sqft );
  }
   laborHours = totalsqft * LABOR_HOURS-PER-SQFT;
   paintCosts = gallonsNeeded * paintPrice;
   laborCosts = laborHours * LABOR-RATE;
   totalcost = paintCosts + laborCosts;

   displayEstimate ( paintCosts, laborCosts, gallonsNeeded, 
                     laborHours, totalCost);

return 0;
}

// Get and validate the room numbers

int getNumRooms()
{
    int rooms;
    cout << "Enter number of rooms: ";
    cin >> rooms;

    while (rooms <1)
    {
        cout << "Error. Enter 1 or more rooms: ";
        cin >> rooms;
    }

return rooms;
}

// Gets and validates paint price
double getPricePerGallon()
{
    double price;
    cout << "Enter paint price per gallon: ";
    cin >> price;

    while( price < 10.0)
    {
        cout << "Error. Price must at least be $10.00 : ";
        cin >> price;
    }
    return price;
}

// gets and validated square foot

double getsqft()
{
    double sqft;
    cout << "Enter square foot of wall space ";
    cin >> sqft;
   while (sqft < 0)
   {
    cout << "Error. square toot can not be negative: /;";
    cin >> sqft;
   }
   return sqft;
}

/* calculates gallons needed
rounding up to the next number. */
int gallonsForRoom (double sqft)
{
return ceil(sqft * GALLONS-PER_SQFT);
}

// Display paint job estimate
void displayEstimate ( double paintCost, double laborCost,
                       int gallons, double laborHours,
                     double totalCost)
{
    cout << fixed << setprecision(2);

    //formatting the title and display.

    cout << "\n Paint Job Estimator /m";
    cout << "--------------------------\n";

    cout << "Gallons Needed: "
         << gallons << endl;
    
    cout <<"Labor Hours: "
         << laborHours << endl;

    cout << "Paint Cost: "
         << paintCost << endl;

    cout << "Labor Cost: $"
         << laborCost << endl;

    cout << "Total Cost: $"
         << totalCost << endl;

}
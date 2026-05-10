//This program estimates the total paint job cost.
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

//global constants
const double GALLONS_PER_SQFT= 1.0 / 110.0;
const double LABOR_HOURS_PER = 8.0 / 110.0;
const double LABOR_RATE = 25.0;

//function prototypes
int getRooms();
int gallonsRoom( double sqft );
double getPricePer();
double getsqft();
void displayEstimate ( double laborCost, 
                       double paintCost,
                       int gallons, 
                       double laborHours, 
                       double totalCost);

int main ()
{
  int rooms;
  int gallonsNeeded =0;

  double paintPrice;
  double sqft;
  
  double totalsqft =0.0;
  double laborHours;
  double paintCost;
  double laborCosts;
  double totalCost;

  rooms = getRooms();
  paintPrice = getPricePer();


  for (int count = 1; count <= rooms; count++)
  {
    sqft = getsqft();
    totalsqft += sqft;
    
    gallonsNeeded += gallonsRoom(sqft);
  }
  //calculations
   laborHours = totalsqft * LABOR_HOURS_PER ;
   paintCost = gallonsNeeded * paintPrice;
   laborCosts = laborHours * LABOR_RATE;
   totalCost = paintCost + laborCosts;

   displayEstimate ( laborCosts, paintPrice, gallonsNeeded, 
                     laborHours, totalCost );

return 0;
}

// Get and validate the room numbers

int getRooms()
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
double getPricePer()
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
int gallonsRoom (double sqft)
{
return ceil(sqft * GALLONS_PER_SQFT );
}

// Display paint job estimate
void displayEstimate ( double laborCost, 
                       double paintCost,
                       int gallons, 
                       double laborHours,
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

    cout << "Paint Cost: $"
         << paintCost << endl;

    cout << "Labor Cost: $"
         << laborCost << endl;

    cout << "Total Cost: $" 
         << totalCost << endl;

}
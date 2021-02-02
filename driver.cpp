#include <iostream>
#include <iomanip>
using namespace std;

double calculateCost(int quantity, double unitCost);

double calculateDiscountedCost(double discount, double baseCost);

void printErrorMessage(string message);

void printFormattedMessage(string message, double value);



int main(int argc, char *argv[])
{
  int quantity = 4; 
  double unitCost = 3.50;
  double discount = 10.2;
  double cost = calculateCost(quantity,  unitCost);
  if(cost < 0){
    printErrorMessage("Invalid cost: exiting");
    return 0;
  }
  
  double discounted = calculateDiscountedCost(discount, cost);
  printFormattedMessage("Cost",cost);
  printFormattedMessage("Discounted Cost",discounted);
  return 0;
}

double calculateCost(int quantity, double unitCost){
  if(quantity < 0){
    printErrorMessage("Cannot calculate cost if quantity < 0");
    return -1;
  }
  return quantity * unitCost;
}

double calculateDiscountedCost(double discount, double baseCost){
  return baseCost - 0.01 * discount * baseCost; // or baseCost(1.0 - discount)
}

void printErrorMessage(string message){
  cerr << "---------------" << endl;
  cerr << message << endl;
  cerr << "---------------" << endl;
}

void printFormattedMessage(string message, double value){
  cout << message << " : " << setprecision(3) << value << endl;
}


#include <iostream>

using namespace std;

double calculateCost(int, double); 

double calculateDiscountedCost(double discount, double baseCost);

int main(int argc, char *argv[])
{
  int quantity = 3;
  double unitCost = 3.50;
  double cost = calculateCost(quantity,  unitCost);
  cout << "The cost is " << cost << endl;
  return 0;
}

double calculateCost(int quantity, double unitCost){
  return quantity * unitCost;
}

double calculateDiscountedCost(double discount, double baseCost){
    return baseCost - 0.1 * discount * baseCost; // or baseCost(1.0 - discount)
}


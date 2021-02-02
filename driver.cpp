#include "calculator.h"
#include "printer.h"
#include <iostream>

using namespace std;


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



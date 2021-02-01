#include "calculator.h"
#include "printer.h"

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

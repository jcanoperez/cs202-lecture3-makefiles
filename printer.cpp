#include "printer.h"
#include <iomanip>
// Question: Why not put this in the header?
using namespace std;

void printErrorMessage(string message){
  cerr << "---------------" << endl;
  cerr << message << endl;
  cerr << "---------------" << endl;
}

void printFormattedMessage(string message, double value){
  cout << message << " : " << setprecision(3) << value << endl;
}

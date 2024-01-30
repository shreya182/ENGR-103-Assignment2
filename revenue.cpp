#include <iostream>
#include <cmath>

using namespace std;

int main() {
 double cost;
 double base;
 double rp;
 cout << "Enter the cost to manufacture each device:" << endl;
 cin >> cost;
 cout << "Enter the base cost: " << endl;
 cin >> base;
 cout << "Enter the revenue for each device:" << endl;
 cin >> rp;

 double num = base/(rp - cost);
 int n = ceil(num);
 cout << n << endl;
 return 0;
}

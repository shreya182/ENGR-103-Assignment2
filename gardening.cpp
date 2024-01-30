#include <iostream>
#include <cmath>

using namespace std;

int main() {
 //get values
 double n1, p1, k1, n2, p2, k2, n3, p3, k3;
 cout << "Nitrogen in ingredient 1: " << endl;
 cin >> n1;
 cout << "Phosphorous in ingredient 1: " << endl;
 cin >> p1;
 cout << "Potassium in ingredient 1: " << endl;
 cin >> k1;
 cout << "Nitrogen in ingredient 2: " << endl;
 cin >> n2;
 cout << "Phosphorous in ingredient 2: " << endl;
 cin >> p2;
 cout << "Potassium in ingredient 2: " << endl;
 cin >> k2;
 cout << "Nitrogen in ingredient 3: " << endl;
 cin >> n3;
 cout << "Phosphorous in ingredient 3: " << endl;
 cin >> p3;
 cout << "Potassium in ingredient 3: " << endl;
 cin >> k3;

 //calculations
 double m1 = (k3 - n3 + (n3 - n2 + k2 - k3) * ((p3 - n3) / (n2 - n3 + p3 - p2))) / (k3 - n3 + n1 - k1 + (n3 - n2 + k2 - k3) * ((n1 - n3 + p3 - p1) / (n2 - n3 + p3 - p2)));
 cout << "M1: " << m1 << endl;
 double m2 = ((p3 - n3 - m1*(n1-n3+p3-p1))/(n2-n3+p3-p2));
 cout << "M2: " << m2 << endl;
 double m3 = 1 - m1 - m2;
 cout << "M3: " << m3 << endl;

 cout << "Proportion of nitrogen: " << ((m1*n1) + (m2*n2) + (m3*n3)) << endl;
 cout << "Proportion of phosphorous: " << ((m1*p1) + (m2*p2) + (m3*p3)) << endl;
 cout << "Proportion of potassium: " << ((m1*k1) + (m2*k2) + (m3*k3)) << endl;

 return 0;
}

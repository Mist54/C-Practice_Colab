// Unit converter
#include <bits/stdc++.h>
using namespace std;
float MeterToFeet(float meter) {
  float feet = 3.28084 * meter;
  return feet;
}
float FeetToMeter(float feet) {
  float meter = feet / 3.2;
  return meter;
}
int main() {
jump:
  int choice;
  float meter, feet;
  cout << "Choose the Unit Convertion format"
       << "\n";
  cout << "1> Meter to feet"
       << "\n";
  cout << "2> Feet to Meter"
       << "\n";
  cin >> choice;
  switch (choice) {
  case 1: {
    cout << "Enter the Meter value"
         << "\n";
    cin >> meter;
    float feetValue = MeterToFeet(meter);
    cout << "The Result: " << feetValue << "\n";
    break;
  }
  case 2: {
    cout << "Enter the feet value"
         << "\n";
    cin >> feet;
    float meterValue = FeetToMeter(feet);
    cout << "The Result: " << meterValue << "\n";
    break;
  }
  default:
    break;
  }
  cout << "\n";
  goto jump;

  return 0;
}

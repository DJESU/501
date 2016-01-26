#include <iostream>
#include <cmath>
int main()
    {
    using namespace std;
    int
    f,
    c;
    cout << "What is the temperature? (Fahrenheit)";
    cin >> f;
    c = 5 * (f - 32)/9;
    cout <<"\n The temperature is "<<  c <<  "º";
    return 0;
  }

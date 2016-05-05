//Quiz 07
//La suma del producto de dos sumas

#include <iostream>

using std :: cin;
using std :: cout;

int dot_product(int x[], int y[], int num, int num2)
  {
    int total = 0;
    int mult;
    for (int i = 0; i < num && i < num2 ; i++)
    {
    mult = x[i] * y[i];
    total = mult + total;
    }
    return total;
  }


int main()
  {
    int num;
    cout << "Dime el largo de la primera lista ";
    cin >> num;
    int x[num];
    for (int i = 0; i < num ; i++)
    {
      cout << "Dime un numero ";
      cin >> x[i];
    }

    int num2;
    cout << "Dime el largo de la segunda lista ";
    cin >> num2;
    int y[num2];
    for (int i = 0; i < num2 ; i++)
    {
      cout << "Dime un numero ";
      cin >> y[i];
    }

    cout << dot_product(x, y, num, num2);
    return 0;
  }

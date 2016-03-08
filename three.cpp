#include <iostream>

using std :: cin;
using std :: cout;

int find_threes(int x[], int num)
{
  int total = 0;
  for (int i = 0; i < num ; i++)
  {
    if (x[i]%3 == 0)
      {
      total = total + x[i];
      }
  }
  return total;
}

int main ()
{
  int num = 3;
  int x[num];
  for (int i = 0; i < num ; i++)
  {
    cout << "Tell me a number ";
    cin >> x[i];
  }
  cout << find_threes(x, num) << endl;

  return 0;
}

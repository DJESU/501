#include <iostream>
int resta(int n1,int n2)
{
  int f;
  f = n1-n2;
  return f;
}

int multiplicacion(int n1, int n2)
  {
    int p;
    p = n1*n2;
    return p;
  }

  int division(int n1, int n2)
  {
    int d;
    d = n1/n2;
    return d;
  }

  int residuo(int n1, int n2)
  {
    int r;
    r = n1%n2;
    return r;
  }
int main()
          {
        using std :: cin;
        using std :: cout;
        int n1, n2;
        cout << "Introduzca un numero ";
        cin >> n1;
        cout << "Indroduzca un segundo numero ";
        cin >> n2;

        cout << "La multiplicacion de los numeros es " << multiplicacion(n1,n2) << "\nLa division de los numeros es \n" << division(n1,n2);
        cout << "La resta de los numeros es " << resta(n1,n2) << "\nEL residuo de los numeros es \n" << residuo(n1,n2);

        return 0;
}

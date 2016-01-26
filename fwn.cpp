#include <iostream>
int main()
          {
        using namespace std;
        int n1,
        n2,
        d,
        p,
        r,
        f;
        cout << "Introduzca un numero";
        cin >> n1;
        cout << "Indroduzca un segundo numero";
        cin >> n2;
        f = n1-n2;
        p = n1*n2;
        d = n1/n2;
        r = n1%n2;
        cout << "La resta de los numeros es " << f << "\nEl producto de los numeros es \n" << p;
        cout << "The division of the numbers is " << d << "\nEL residuo de los numeros es \n" << r;
                return 0;
}

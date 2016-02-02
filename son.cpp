#include <iostream>
int main()
          {
            using namespace std;

            int
            min,
            max,
            a=0;

            cout<<"Please give us the lower bound: ";
            cin>>min;
            cout<<"\nPlease give us the upper bound: ";
            cin>>max;

            for (min = min; // que valor tomas en cuenta para empezar
                 min <= max; // hasta cuando se va a terminar la funcion
                 min += 1) //cuanto se va a agregar
                a += min; // variable que va sumando cada vez que el minimo avanza al maximo

            cout<<"\nThe sum is "<<a;

            return 0;
          }

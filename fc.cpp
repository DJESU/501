#include <iostream>
int main()
          {
            using namespace std;

            int
            n,
            b=1,
            r;

            cout<<"Give me a non-negative integer  ";
            cin>>n;

            for (r=1 ; r<= n; r++)
            {
              b = r*b;
            }

          cout<<"\nThe factorial is "<<b;
          return 0;

          }

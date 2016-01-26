#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
int main()
    {
    using namespace std;
    int
    ale,
    res,
    inte;
    srand (time(0));
    cout << "Numero entre 1 y 50 ";
    ale=1 + rand() % (51 - 1 );
    inte=0;
    do
      {
      inte=inte+1;
      cout<<"\nQue numero estoy pensando ";
      cin>>res;
      if(res > ale)
      cout<<"\nEl numero " <<res<< " es muy alto";
        if (res < ale)
        cout<<"\nEl numero " <<res<< " es muy bajo";
      } while (res !=  ale);
        inte=inte+1;
        cout << "\nEl numero "<<res<<" es el correcto";
        cout << "\nTu numero de intentos fue " << inte;

    return 0;

  }

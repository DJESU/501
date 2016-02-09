#include <iostream>
int main()
          {
        using namespace std;
        int n1,
        n2,
        c;
        char res;
        cout << "Introduzca un numero\n";
        cin >> n1;
        cout << "Indroduzca un segundo numero\n";
        cin >> n2;


      while (res != '1' || res!= '2' || res != '3' || res != '4')
      {
        cout<< "\nQue desea hacer con estos numeros";
        cout<< "\n1 Restar\n 2 Muliplicar\n 3 Dividir \n 4 Residuo\n";
        cin>> res;
          switch (res)
          {
          case '1':
          c = n1-n2;
          cout << "\n La respuesta es "<<c;
          break;

          case '2':
          c = n1*n2;
          cout << "\n La respuesta es "<<c;
          break;

          case '3':
          c = n1/n2;
          cout << "\n La respuesta es "<<c;
          break;

          case '4':
          c = n1%n2;
          cout << "\n La respuesta es "<<c;
          break;

          default:
          cout<<"\nEl comando es invalido";
            break;
        }
      }
        cout<<"\n Que tenga un buen dia !!!";
        return 0;
}

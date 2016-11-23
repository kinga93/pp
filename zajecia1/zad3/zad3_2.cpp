#include <iostream>
using namespace std;// przestrzeń nazw 

int main() {

  double a = 0;
  double b = 0;
  char znak = ' ';
  char klawisz=' ';
  cout<<"Aby zakonczyc program nacisnij ESC lub inny aby kontunuowac"<<endl;

  do{
    cout<<"Wpisz a: ";
    cin>>a;
  
    cout<<"Wpisz b: ";
    cin>>b;

    cout<<"Wpisz znak (+,-,/,*): ";
    cin>>znak;

    double wynik = 0;
    switch(znak){
      case '+':
        wynik=a+b;
        break;
      case '-':
        wynik=a-b;
        break;
      case '/':
        if( b==0 ) {
          cout<<"nie dzieli sie przez zero"<<endl;
        }else {
          wynik=a/b;
        }
        break;
      case '*':
        wynik=a*b;
        break;
      default: 
        cout<<"Podany znak jest zly"<<endl;
    }

    cout<<"Wynik dzialania "<<a<<znak<<b<<"="<<wynik<<endl;

    cin>>klawisz;
  }while(klawisz!=27);
  
  return 0; //standardowa wartosc zwracana , wszystko okej
}

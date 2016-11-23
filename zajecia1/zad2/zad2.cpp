#include <iostream>

using namespace std;// przestrzeń nazw 


int main() {

  double a = 0;
  double b = 0;
  char znak = ' ';

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
        cout<<"nie dzieli się przez zero"<<endl;
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

  cout<<"Wynik= "<<wynik<<endl;

  return 0; //standardowa wartosc zwracana , wszystko okej
}

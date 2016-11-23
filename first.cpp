#include <iostream>

using namespace std;// przestrzeń nazw 

void obliczWynik(double wspolczynnikA, double wspolczynnikB) {
  
  double x = 0;
  
      x=wspolczynnikA+wspolczynnikB;
    
       cout<<x<<endl;
  
}

int main() {

  double a = 0;
  double b = 0;

  cout<<"Wpisz a: ";
  cin>>a;
  
  cout<<"Wpisz b: ";
  cin>>b;

  obliczWynik(a,b);

  return 0; //standardowa wartosc zwracana , wszystko okej
}

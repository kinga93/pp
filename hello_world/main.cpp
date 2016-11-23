#include <iostream>

using namespace std;// przestrzeń nazw 

void obliczMiejscaZeroweUzywajacAiB(double wspolczynnikA, double wspolczynnikB) {
  double x = 0;
  if (wspolczynnikA!=0) {
    x=(-wspolczynnikB)/wspolczynnikA;
    cout<<x<<endl;
  } else { 
    cout<<"brak miejsc zerowch"<<endl;
  }
}

int main() {

  double a = 0;
  double b = 0;

  cout<<"Wpisz a: ";
  cin>>a;
  
  cout<<"Wpisz b: ";
  cin>>b;

  obliczMiejscaZeroweUzywajacAiB(a,b);

  return 0; //standardowa wartosc zwracana , wszystko okej
}

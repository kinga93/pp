#include <iostream>

using namespace std;

int srednia(int tab[], int rozm_tab){
  int sred=tab[0];
  int suma_liczb;
  for(int i=0;i<10;i++){
    suma_liczb+=tab[i];
  }
    sred=suma_liczb/rozm_tab;
    
  return sred;

}

int main(){
  int rozm_tab=10;
  int tab[rozm_tab];
  for (int i=0;i<10;i++){
    cout<<"wprowadz "<<i+1<<" liczbe ";
    cin>>tab[i];
}

    cout<<"wartosc srednia: "<<srednia(tab,rozm_tab)<<endl;
  return 0;
}

#include <iostream>

using namespace std;

int srednia(int tab[], int rozm_tab){
  int sred=tab[0];
  int suma_liczb;
  for(int i=0;i<10;i++){
    suma_liczb+=tab[i];
  }
  sred=suma_liczb/rozm_tab;
  cout<<"srednia wprowadzonych liczb= "<<sred<<endl;

}

int main(){
  int rozm_tab=10;
  int tab[rozm_tab];
  for (int i=0;i<10;i++){
 
cout<<"wprowadz "<<i+1<<" liczbe ";
if(i%3==0){
cin>>tab[i];
}
else 
cout<<"liczba nie jest podzielna przez 3 wprowadz inna liczbe ";

cout<<srednia(tab,rozm_tab)<<endl;
 return 0;
}

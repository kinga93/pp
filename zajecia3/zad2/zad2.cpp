#include <iostream>
#include <iomanip>
using namespace std;

int maksimum(int tab[], int rozm_tab) {
  int max=tab[0];
  for(int i=0;i<rozm_tab;i++) {
    if(tab[i]>max) {
      max=tab[i];
    }
  }

  return max;
}

int minimum(int tab[],int rozm_tab) {
  int min=tab[0];
  for(int i=0;i<rozm_tab;i++) {
    if(tab[i]<min) {
      min=tab[i];
    }
  }

  return min;
}

double srednia(int tab[],int rozm_tab) {
  int suma_liczb=0;
  for(int i=0;i<rozm_tab;i++) {
    suma_liczb+=tab[i];
  }
  return suma_liczb/(double)rozm_tab;
}


void bouble_sort(int tab[], int n) {   
    int k = 0;
    int j = 0;
    int pom;
    for(int i=0;i<n;i++) {
        for(j=k;j<n-(i+1);j++) {
            if (tab[j+1]<tab[j]) {
                pom=tab[j+1];
                tab[j+1]=tab[j];
                tab[j]=pom;
            }
        }
        for (k=j-1;k>i;k--) {
            if (tab[k]<tab[k-1]) {
                pom=tab[k];
                tab[k]=tab[k-1];
                tab[k-1]=pom;
            }
        }
        k++;
    }
}

int mediana(int tab[],int rozm_tab) {
  bouble_sort(tab, rozm_tab);
  if(rozm_tab%2==0) {
    return ((tab[rozm_tab/2]+tab[(rozm_tab/2)+1])/2);
  }

  return tab[(int)(rozm_tab/2)];
}

int main(){
  int rozm_tab=10;
  int tab[rozm_tab];
  for (int i=0;i<rozm_tab;i++){
    cout<<"wprowadz "<<i+1<<" liczbe ";
    cin>>tab[i];
  }
  for(int i=9;i>=0;i--){
    cout<<tab[i]<<endl;
  }

  cout<<"wartosc min: "<<minimum(tab,rozm_tab)<<endl;
  cout<<"wartosc max: "<<maksimum(tab,rozm_tab)<<endl;
  cout<<"wartosc sredniej: "<<setprecision(2)<<srednia(tab,rozm_tab)<<endl;
  cout<<"wartosc mediany: "<<mediana(tab,rozm_tab)<<endl;

  return 0;
}

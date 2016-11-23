#include <iostream>

using namespace std;

int maksimum(int tab[]){
  
    int max=tab[0];
   for (int i=0;i<5;i++){
       if(tab[i]>max){
         max=tab[i];
    }
  }
  return max;
}

int minimum(int tab[]){
  
    int min=tab[0];
   for (int i=0;i<5;i++){
       if(tab[i]<min){
         min=tab[i];
    }
  }
  return min;
}

void bouble_sort(int tab[], int n){   
    int k = 0;
    int j = 0;
    int pom;
    for (int i = 0 ; i < n ; i++){
        for (j = k ; j < n - (i+1) ; j++){
            if (tab[j+1] < tab [j]){
                pom = tab [j+1];
                tab [j+1] = tab [j];
                tab [j] = pom;
            }
        }
        for (k = j - 1 ; k > i ; k--){
            if (tab [k] < tab [k-1]){
                pom = tab [k];
                tab [k] = tab [k-1];
                tab [k-1] = pom;
            }
        }
        k++;
    }
}

int mediana(int tab[]){
   bouble_sort(tab, 5);
   return tab[2];
}


int main(){

  int tab[5];

 for(int i=0;i<5;i++){
   cout<<"wprowadz "<<i+1<<" liczbe: ";
   cin>>tab[i];

}
  cout<<"wartosc min: "<<minimum(tab)<<endl;
  cout<<"wartosc max: "<<maksimum(tab)<<endl;
  cout<<"wartosc mediany: "<<mediana(tab)<<endl;
  return 0;
}






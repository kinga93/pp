#include <iostream>

using namespace std;

int maksimum(int tab[], int l_wprowadz_elem){
  
    int max=tab[0];
   for (int i=0;i<l_wprowadz_elem;i++){
       if(tab[i]>max){
         max=tab[i];
    }
  }
  return max;
}

int minimum(int tab[],int l_wprowadz_elem ){
  
    int min=tab[0];
   for (int i=0;i<l_wprowadz_elem;i++){
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

int mediana(int tab[],int l_wprowadz_elem){
   bouble_sort(tab, l_wprowadz_elem);
   if(l_wprowadz_elem%2==0){
    return((tab[l_wprowadz_elem/2]+tab[(l_wprowadz_elem/2)+1])/2);
  }
  return tab[(int)(l_wprowadz_elem/2)];
}


int main(){

  
  int rozm_tab;
  cout<<"wprowadz rozmiar tablicy: ";
  cin>>rozm_tab;

  int tab[rozm_tab];
  int sumaliczb=0;
  int l_wprowadz_elem=0;

 for(int i=0;i<rozm_tab;i++){
   cout<<"wprowadz "<<i+1<<" liczbe: ";
   cin>>tab[i];
   l_wprowadz_elem++;

  sumaliczb+=tab[i];
  if(sumaliczb>=100){
     break; 
}
  if(tab[i]==tab[i-1]){
   break;
}

}
  cout<<"wartosc min: "<<minimum(tab,l_wprowadz_elem)<<endl;
  cout<<"wartosc max: "<<maksimum(tab,l_wprowadz_elem)<<endl;
  cout<<"wartosc mediany: "<<mediana(tab,l_wprowadz_elem)<<endl;
  return 0;
}






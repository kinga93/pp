#include <iostream>

using namespace std;

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
  return 0;
}

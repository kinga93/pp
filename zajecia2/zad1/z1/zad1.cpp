#include <iostream>

using namespace std;

int main(){

  int a=0;
  int b=0;
  int k=0;

   cout<<"Wprowadz przedzial liczb od: ";
   cin>>a;

   cout<<"do: ";
   cin>>b;

   cout<<"wprowadz liczbe k: ";
   cin>>k;


  for (int i=a;i<b;i++){

    if(i%k==0){
      cout<<i<<endl; 
    }
  }

   return 0;
}

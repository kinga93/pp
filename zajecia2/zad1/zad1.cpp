#include <iostream>

using namespace std;// przestrzeń nazw 

   int liczba=10;

void drukujliczbelokalnie(){

   int liczba=4;
    cout<<liczba<<endl;
}

void drukujliczbeglobalnie(){

    cout<<liczba<<endl;
}

void drukujliczbeArgument(int liczba){

    cout<<liczba<<endl;
}

int main(){

   int liczba=5;

     cout<<liczba<<endl;

   drukujliczbelokalnie();
   drukujliczbeglobalnie();
   drukujliczbeArgument();
   
   return 0;

}

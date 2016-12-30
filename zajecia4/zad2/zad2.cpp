#include <iostream>

using namespace std;

void zamien(char *tab, int tab_size, char szukany, char nowy){
  for(int i=0;i< tab_size;i++){
    if(*tab==szukany){
      *tab=nowy;
    }
  tab++;
  }
}

int main(){
  char zdanie[]="Moj traktor jest czerwony";
  zamien(zdanie,26,'o','x');
  cout<<zdanie<<endl;

  return 0;
}

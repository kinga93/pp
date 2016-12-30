#include <iostream>
#include <string> 
using namespace std;

int wyswietl_menu() {
  int odpowiedz_uzytkownika=0;
  cout<<"1. drukuje czesc tablicy od miejsca P do miejsca K"<<endl;
  cout<<"2. pozwala zastapic wszystkie male litery duzymi literami"<<endl;
  cout<<"3. pozwala zastapic pierwsze litery wszystkich slow wielkimi literami"<<endl;
  cout<<"4. zamienia wystąpienia słów w tablicy na inne słowa "<<endl;
  cin>>odpowiedz_uzytkownika;

 return odpowiedz_uzytkownika;
}

void obsluga_przypadku1(char *tablica, int tab_size){
int miejsceP=0;
int miejsceK=0;

cout<<"Podaj miejsce P"<<endl;
cin>>miejsceP;
cout<<"Podaj miejsce K"<<endl;
cin>>miejsceK;

for (int i=miejsceP;i<=miejsceK;i++){
cout<<tablica[i]<<endl;
}
}

void obsluga_przypadku2(char *tablica, int tab_size){
  for (int i=0;i<tab_size;i++){
    if(tablica[i]==' '){
      continue;
    }
    tablica[i]=tablica[i]-32;
  }
cout<<tablica<<endl;
}

void obsluga_przypadku3(char *tablica, int tab_size){
  tablica[0]=tablica[0]-32;
  for (int i=0;i<tab_size;i++){
    if(tablica[i]==' '){
      tablica[i+1]=tablica[i+1]-32;
    }
  }
cout<<tablica<<endl;
}

void obsluga_przypadku4(char *tablica, int tab_size){

string slowo_szukane;
string slowo_nowe;
string tab(tablica);
cout<<"wpisz slowo ktore chcesz by bylo zmienione: "<<endl;
cin>>slowo_szukane;
cout<<"wpisz slowo na ktore chcesz zamienic: "<<endl;
cin>>slowo_nowe;


if (tab.find(slowo_szukane) != std::string::npos) {
    int poz = tab.find(slowo_szukane);
    tab.replace(poz, slowo_szukane.size(),slowo_nowe);
}
  cout<<tab<<endl;

}

int main(){

char tablica[]="nienawidze cpp bo nie lubie pisac wiecznie slowa main";

int odpowiedz_uzytkownika=0;
odpowiedz_uzytkownika=wyswietl_menu();

switch(odpowiedz_uzytkownika){
case 1:
obsluga_przypadku1(tablica,53);
break;
case 2:
obsluga_przypadku2(tablica,53);
break;
case 3:
obsluga_przypadku3(tablica,53);
break;
case 4:
obsluga_przypadku4(tablica,53);
break;
default:
odpowiedz_uzytkownika=wyswietl_menu();
} 

return 0;
}

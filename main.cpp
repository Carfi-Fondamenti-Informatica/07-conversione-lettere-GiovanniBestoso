#include <iostream>
#include "lib.h"

int main(){
   char a=0;
    cin>>a;
    if((funzione(a)== true)){
        cout<<a;
    }else if((funzione(a)==false)){
        cout<<"errore"<<endl;
    }
  return 0;
}

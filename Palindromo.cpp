#include <iostream>
#include <sstream>
#include <string>
#include <string.h>



using namespace std;

bool Palindromo (int entrada){
    string aux;
    int j=0,z;

    stringstream ss;
    ss<<entrada;
    ss>>aux;


    z=aux.length();

    while(aux[z-1] == aux [j]){
        j++;
        z--;
        if(z==0){
        return true;
        }

    }

    return false;
    }




int main(){
    int numero;
    cout<<"entre com o nomero"<<endl;
    cin >>numero;

    cout <<Palindromo(numero);

    return 0;
}

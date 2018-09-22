#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

string palabra_original;
string palabra_mostrar;
int vidas;
void mostrar();
void ingresar(char a);
void inicializar();

int main(){
    inicializar();
    mostrar();

    while(vidas>0 && palabra_mostrar!= palabra_original){
        char a;
        cin>>a;
        system("cls");
        ingresar(a);
        mostrar();
    }
    if(vidas>0){
        cout << " ACERTASTE!!!";
    }else{
    cout << " HAST PERDIDO!!, La palabra era:" << palabra_original<< endl;
    }
}

void mostrar(){
    cout << " vidas: " << vidas << endl;
    cout << palabra_mostrar << endl;
    }

void inicializar(){
    vidas = 5;
    palabra_original=" felicidades";

    for(int i=0;i<palabra_original.length();i++){
            if(palabra_original[i]>='A' && palabra_original[i]<='Z'){
                palabra_original[i]+=32;
            }
            }
    for(int i=0;i<palabra_original.length();i++){
            if(palabra_original[i]>='a' && palabra_original[i]<='z'){
                palabra_mostrar+='-';
            }else{
            palabra_mostrar+=palabra_original[i];
            }
    }
}

    void ingresar(char a){
        bool perdiVidas=true;
        for(int i=0;i<palabra_original.length();i++){
            if(a==palabra_original[i]){
            perdiVidas=false;
            palabra_mostrar[i]=a;
        }
    }

    if(perdiVidas) vidas--;
    }

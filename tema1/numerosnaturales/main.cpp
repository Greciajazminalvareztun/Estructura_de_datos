#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <string>
#include <fstream>
#include "numeros.h"

using namespace std;

int main()
{
    numeros z;
    int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,op;

    cout << " *************************************** " << endl;
    cout << "PROGRAMA DE NUMEROS NATURALES " << endl;
    cout << " *************************************** " << endl;

    do {
        cout << " ELIJA UNA OPCION: "<< endl;
        cout << " 1.- SUCESOR "<< endl;
        cout << " 2.- ANTECESOR "<< endl;
        cout << " 3.- SUMA "<< endl;
        cout << " 4.- DIFERENCIA "<< endl;
        cout << " 5.- OPERACION MENOR "<< endl;
        cout << " 6.- IGUAL " << endl;
        cout << " 7.- SALIR " << endl;
        cin >> op;

        switch (op){
        case 1:
            cout << " ------------------ " << endl;
            cout << " SUCESOR " << endl;
            cout << " ------------------ " << endl;
            cout << " DIGITE EL NUMERO " << endl;
            cin >> n1;
            cout << " *************************************** " << endl;
            cout << "EL SUCESOR ES: "<<z.sucesor(n1)<< endl;
            cout << " *************************************** " << endl;
            break;

        case 2:
            cout << " ------------------ " << endl;
            cout << " ANTECESOR " << endl;
            cout << " ------------------ " << endl;
            cout << " DIGITE EL NUMERO " << endl;
            cin >> n2;
            cout << " *************************************** " << endl;
            cout << "EL ANTECESOR ES: "<<z.antecesor(n2)<< endl;
            cout << " *************************************** " << endl;
            break;

        case 3:
            cout << " ------------------ " << endl;
            cout << " SUMA DE DOS NUMEROS " << endl;
            cout << " ------------------ " << endl;
            cout << " DIGITE UN NUMERO " << endl;
            cin >> n3;
            cout << "DIGITE OTRO NUMERO " <<endl;
            cin >> n4;
            cout << " *************************************** " << endl;
            cout << "LA SUMA ES: " << z.suma(n3,n4) << endl;
            cout << " *************************************** " << endl;
            break;

        case 4:
            cout << " ------------------ " << endl;
            cout << " DIFERENCIA DE NUMEROS " << endl;
            cout << " ------------------ " << endl;
            cout << " DIGITE UN NUMERO " << endl;
            cin >> n5;
            cout << " DIGITE OTRO NUMERO " << endl;
            cin >> n6;
            cout << " *************************************** " << endl;
            cout << "LA DIFERENCIA ES: " << z.diferencia(n5,n6) <<endl;
            cout << " *************************************** " << endl;
            break;

         case 5:
            cout << " ------------------ " << endl;
            cout << " OPERACION MENOR " << endl;
            cout << " ------------------ " << endl;
            cout << " DIGITE UN NUMERO " << endl;
            cin >> n7;
            cout << "EL OTRO NUMERO " <<endl;
            cin >> n8;
            cout << " *************************************** " << endl;
            cout << "EL NUMERO MENOR ES: " << z.operacionmenor(n7,n8) << endl;
            cout << " *************************************** " << endl;
            break;

        case 6:
            cout << " ------------------ " << endl;
            cout << " IGUAL " << endl;
            cout << " ------------------ " << endl;
            cout << " DIGITE UN NUMERO " << endl;
            cin >> n9;
            cout << "EL OTRO NUMERO " << endl;
            cin >> n10;
            z.igual(n9,n10);
            break;

        case 7:
            exit(7);
        }

    }while (op<7 || op>7);

    return 0;
}

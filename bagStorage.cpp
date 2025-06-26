#include <iostream>
#include <iomanip>

#include "storage.h"
#include "product.h"

using namespace std;

/*
In this project i will only use english for all the variables and comments, all
the prompts or things that will be written will be in spanish for the benefit of
the user (my dad)
*/

void printMainOptions(){

    cout << endl;
    cout << "0 -> salir del programa" << endl;
    cout << "1 -> proximamente..." << endl;
    cout << "2 -> proximamente..." << endl;
    cout << "3 -> proximamente..." << endl;
    cout << "4 -> proximamente..." << endl;
    cout << "5 -> proximamente..." << endl;
    cout << "6 -> proximamente..." << endl;
    cout << "7 -> proximamente..." << endl;
    cout << endl;
}

int main(){

    int optionMain;
    string text, buffer;
    bool keepRunning = true;

    cout << endl << "Bienvenido a el programa BagStorage 1.0" << endl << endl;

    while (keepRunning){

        cout << "Presiona cualquier tecla para continuar" << endl;
        cin >> buffer;
        
        printMainOptions();
        cout << "Que opcion quieres usar?" << endl;
        cin >> optionMain;

        switch(optionMain){
            case 0 : text = "Gracias por usar el programa";
            keepRunning = false; break;
            case 1 : text = "Has seleccionado la opcion 1\n\n"; break;
            case 2 : text = "Has seleccionado la opcion 2\n\n"; break;
            case 3 : text = "Has seleccionado la opcion 3\n\n"; break;
            case 4 : text = "Has seleccionado la opcion 4\n\n"; break;
            case 5 : text = "Has seleccionado la opcion 5\n\n"; break;
            case 6 : text = "Has seleccionado la opcion 6\n\n"; break;
            case 7 : text = "Has seleccionado la opcion 7\n\n"; break;
            default: text = "No has escogido una opcion valida\n\n"; break;
        }

        cout << text;

    }

    return 0;
}
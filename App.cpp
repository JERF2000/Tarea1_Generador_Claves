#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main (int argc, char const *argv[]){
    
    //Declaración de arreglos y variables
    char clave[15];
    char copia[15];
    
    
    bool DatoDuplicado = false;
    int posision = 0;
    char dato;

    srand(time(NULL));
    //Ciclo for para llenar todos los espacios del arreglo
    for(int i = 0; i < 15; i++){
        clave[i] = 33 + rand()%(93);        //Metodo rand() para asignar codigos ASCII del 33 - 125
        copia[i] = clave[i];
        cout<<"El dato obtenido es: "<<clave[i]<<endl;
    }
    
    

    return 0;
}
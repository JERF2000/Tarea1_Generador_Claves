#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main (int argc, char const *argv[]){
    
    //Declaración de arreglo y variables
    char clave[15];
    
    int pos = 0;
    char dato;
    string cadenaClave = "123456789012345";

    srand(time(NULL));
    //Ciclo for para llenar todos los espacios del arreglo
    for(int i = 0; i < 15; i++){
        do{
            clave[i] = 33 + rand()%(93);
        }while(!(
            (clave[i] == clave[0]) || 
            (clave[i] == clave[1]) || 
            (clave[i] == clave[2]) || 
            (clave[i] == clave[3]) || 
            (clave[i] == clave[4]) || 
            (clave[i] == clave[5]) || 
            (clave[i] == clave[6]) || 
            (clave[i] == clave[7]) || 
            (clave[i] == clave[8]) || 
            (clave[i] == clave[9]) || 
            (clave[i] == clave[10]) || 
            (clave[i] == clave[11]) || 
            (clave[i] == clave[12]) || 
            (clave[i] == clave[13]) || 
            (clave[i] == clave[14]) 
                ));
    }

    //Se agrega todos los caracteres a una variable de tipo string
    pos = 0;
    for(int i = 0; i < 15; i++){
        string charToString(1, clave[pos]);
        cadenaClave.replace(pos, 1, charToString);
        pos++;
    }

    //Resultado Final en Pantalla
    cout<<"Esta es su contraseña: "<<cadenaClave<<endl;

    return 0;
}
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
        clave[i] = 33 + rand()%(93);        //Metodo rand() para asignar codigos ASCII del 33 - 125
    }
    
    //Ciclo para eliminar los caracteres duplicados
    for(int i = 0; i < 15; i++){
        dato = clave[i];
        pos = i;

        for(int j = 0; j < 15; j++){
            //Remplaza el caracter duplicado y evita que se cree uno igual en el resto del arreglo
            if((dato = clave[j])&&(pos != j)){
                do{
                    clave[j] = 33 + rand()%(93);
                }while(!(
                    (clave[j] == clave[0]) || 
                    (clave[j] == clave[1]) || 
                    (clave[j] == clave[2]) || 
                    (clave[j] == clave[3]) || 
                    (clave[j] == clave[4]) || 
                    (clave[j] == clave[5]) || 
                    (clave[j] == clave[6]) || 
                    (clave[j] == clave[7]) || 
                    (clave[j] == clave[8]) || 
                    (clave[j] == clave[9]) || 
                    (clave[j] == clave[10]) || 
                    (clave[j] == clave[11]) || 
                    (clave[j] == clave[12]) || 
                    (clave[j] == clave[13]) || 
                    (clave[j] == clave[14]) 
                ));
            }
        }
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
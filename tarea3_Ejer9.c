/*Mostrar en pantalla todos los numeros terminados en 6 comprendidos entre el 25 al 205*/
/*Por Brandon Arellano estudiante de la carrera de Ingenieria de Software*/

//Abrir biblioteca
#include<stdio.h>
//abrir la funcion main
int main(int argc, char const *argv[])
{
    //creamos una variable llamada banderra y la inicializamos
    int bandera = 26;
    //imprime el enunciado del ejercicio
    printf("Mostrar en pantalla todos los numeros terminados en 6 comprendidos entre el 25 al 205");
    //imprime el enunciado de los numeros que terminan en 6
    printf("\nLos numeros que terminen en 6 son: \n");
    //utilizamos un for con la bandera y que no sea mayor o igual que 205
    for (bandera ; bandera <= 205 ; bandera++){
        //ocupamos una condicional para tener los numero en 6
        if(bandera % 10 == 6 ){
            //imprimirmos los numeros que terminan en 6
            printf("%d\n",bandera);
        }
    }
    //como es un funcion debe retorna pero como es el main retorna 0 
    return 0;
}



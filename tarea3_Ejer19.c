/*Leer un numero entero y determinar si es primo*/
/*Por Brandon Arellano estudiante de la carrera de Ingenieria de Software*/

//abrimos la libreria stdio.h
#include <stdio.h>

//inicializamos el main 
int main() {
    //inicializamos las variables a usar
    int numero, bandera, numeroPrimo = 1;
    //imprimimos el enunciado
    printf("Leer un numero entero y determinar si es primo");
    //imprimimos la solicitud al usuario
    printf("\nIngrese un numero entero: ");
    //leemos con la funcion scanf lo que digite el usuario
    scanf("%d", &numero);
    
    //ocupamos un for iniciando la bandera en 2 y que esta no debe ser mayor al numero ingresado a la mitad, e incrementa de uno en uno
    for(bandera = 2; bandera <= numero / 2; bandera++) {
        //ocupa un if para el modulo 
        if(numero % bandera == 0) {
            numeroPrimo = 0;
            //hacemos un cierre forzado con el break
            break;
        }
    }
    //utilizamos un if para imprimir el numero primo sino que no es un numero primo
    if (numeroPrimo)
        printf("%d es un numero primo.\n", numero);
    else
        printf("%d no es un numero primo.\n", numero);
    //como es un funcion debe retorna pero como es el main retorna 0 
    return 0;
}

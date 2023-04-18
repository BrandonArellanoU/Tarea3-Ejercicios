/*leer un numero entero y determinar a cuanto es igual el primero de sus digitos*/
/*Por Brandon Arellano estudiante de la carrera de Ingenieria de Software*/

//abrimos la libreria stdio.h
#include <stdio.h>

//inicializamos el main
int main() {
    //inicializamos las variables a usar
    int numero, primerDigito;

    //imprimimos el enunciado
    printf("Leer un numero entero y determinar a cuanto es igual el primero de sus digitos\n");
    //imprimimos la solicitud al usuario para que ingrese un numero
    printf("Ingrese un numero entero: ");
    //leemos el numero ingresado con la funcion scanf
    scanf("%d", &numero);

    //ocupamos un while para que se ejecute si el numero es mayor a 10
    while (numero >= 10) {
        //hacemos que el numero sea el numero entre 10
        numero = numero / 10;
    }
    //asignamos el valor de una variable a otra
    primerDigito = numero;
    //imprimios el primer digito
    printf("El primer digito del numero ingresado es: %d\n", primerDigito);

    //como es un funcion debe retorna pero como es el main retorna 0 
    return 0;
}


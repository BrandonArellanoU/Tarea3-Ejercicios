/*Se define la serie de Fibonacci como la serie que comienza con los digitos 1 y 0 y va sumando progresivamente los dos ultimos elementos 
de la serie,asi :
0 1   1  2  3  5  8  13  21  34...
utilizando el concepto de ciclo, generar la serie de Fibonacci hasta llegar o sobrepasar el numero 10000 */
/*Por Brandon Arellano estudiante de la carrera de Ingenieria de Software*/

//abrimos la libreria stdio.h
#include <stdio.h>

//inicializamos el main
int main() {
    //inicializamos las variables a usar
    int numeroUno = 0, numeroDos = 1, sigNumero = 0;
    
    //imprimimos el enunciado
    printf("Se define la serie de Fibonacci como la serie que comienza con los digitos 1 y 0 y va sumando progresivamente los dos ultimos elementos de la serie\nasi : 0 1   1  2  3  5  8  13  21  34... \nutilizando el concepto de ciclo, generar la serie de Fibonacci hasta llegar o sobrepasar el numero 10000 \n");
    printf("Queda lo siguiente: ");
    //imrpime los numeros
    printf("%d %d ", numeroUno, numeroDos);
    
    //utilizamos un while para llegar hasta el numero 10 000
    while (sigNumero <= 10000) {
        sigNumero = numeroUno + numeroDos;
        //imprimimos el numero
        printf("%d ", sigNumero);
        //cambiamos el orden de las variables
        numeroUno = numeroDos;
        numeroDos = sigNumero;
    }
    //como es un funcion debe retorna pero como es el main retorna 0
    return 0;
}

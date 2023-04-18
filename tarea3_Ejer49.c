/*Utilizando ciclos anidados, generar las siguientes ternas de numeros: 
1     1     1
2     1     2
3     1     3
4     2     1
5     2     2
6     2     3
7     3     1
8     3     2
9     3     3
*/
/*Por Brandon Arellano estudiante de la carrera de Ingenieria de Software*/
//abrimos la libreria stdio.h
#include <stdio.h>

//inicializamos el main
int main() {
    //inicializamos las variables a usar
    int i, j, k=1;

    //imprimimos el enunciado
    printf("Utilizando ciclos anidados, generar las siguientes ternas de numeros: \n1     1     1\n2     1     2\n3     1     3\n4     2     1\n5     2     2\n6     2     3\n7     3     1\n8     3     2\n9     3     3 \n");
    printf("El resultado seria: \n");
    //utilizamos un for para la segunda fila
    for(i = 1; i <= 3; i++) {
        //utilizamos un for para la segunda fila con el maximo de 3 y se va incrementando
        for(j = 1; j <= 3; j++) {
            //printf para imprimir el resultado
            printf("%d\t%d\t%d\n", k, i, j);
            //k para la tercera fila
            k++;
        }
    }
    //como es un funcion debe retorna pero como es el main retorna 0
    return 0;
}

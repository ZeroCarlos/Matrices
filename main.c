#include <stdio.h>
#include <stdlib.h>
#include "Metodos/gauss_jordan.h"
#include "mat_op.h"
#include "man_dat.h"

int main(){
    int seleccion = 0;
    float **r_matriz = NULL;
    do{
        printf("Operaciones y metodos de resolucion de matrices\n\t1. Operaciones con matrices\n\t2. Metodos de resolucion de matrices\n\t3. Salir\n");
        scanf("%d", &seleccion);
        system("cls");
        switch(seleccion){
        case 1:
            puts("Operaciones de resolucion de matrices\n\t1. Multiplicacion\n\t2. Suma\n\t3. Resta");
            scanf("%d", &seleccion);
            r_matriz = Operacion_de_matriz(r_matriz, seleccion);
            extern int dim_mat3[];
            puts("\tMatriz Resultante:");
            printp(r_matriz, dim_mat3);
            liberacion(dim_mat3, r_matriz);
            break;
        case 2:
            puts("Metodos de resolucion de matrices\n\t1.Gauss Jordan\n\t2. Gauss\n\t3. Matriz inversa\n");
            scanf("%d", &seleccion);
            switch(seleccion){
                case 1:
                    gauss_jordan();
                case 2:
                case 3:
                default:
                    break;
            }
        case 3:
            seleccion = 0;
            break;
        default:
            puts("No le he comprendido, acaso:");
            break;
    }
    if(seleccion != 0){
            printf("Desea realizar alguna otra operacion?[1/0]\t");
            scanf("%d", &seleccion);
            system("cls");
    }
    }while(seleccion != 0);
    return 0;
}

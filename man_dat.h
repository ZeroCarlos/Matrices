#ifndef __man_dat_h__
#ifndef __stdlib_h__
#include <stdlib.h>
#endif
#define __man_dat_h__

static int i;
float** reserva(int dim[], float **matriz){
	matriz = malloc(dim[0] * sizeof(float));
	for (i = 0 ; i < dim[1]; i++){
		matriz[i] = malloc(dim[1] * sizeof(float));
	}
	return matriz;

}

void liberacion(int mat[], float **matriz){
    for(i = 0; i < mat[1]; i++){
        free(matriz[i]);
    }
    free(matriz);
}

void printp(float **r_matriz, int dim[]){
    for(i = 0; i < dim[1]; i ++){
        for(j = 0; j < dim[0]; j ++){
            printf("%g\t", r_matriz[i][j]);
        }
        printf("\n");
    }
}
#endif

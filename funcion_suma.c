#include "funcionsuma.h"

void suma_matriz(){
int f,c,f1,c1,f2,c2,i,j,a,cont,p;
printf("¿Cuantas matrices desea sumar?");
printf("\n1Suma de dos matrices\n2Suma de tres matrices\n3Suma de cuatro matrices o mas\n");
scanf("%d",&p);
if(p==1){
printf ("Suma de dos matrices");
printf("\n\t");
       int matrizA[10][10],matrizB[10][10],matrizC[10][10];
       printf("\n\n¿Cuantas filas deseas?:");
       scanf("%d",&f);
       printf("\n¿Cuantas columnas deseas?:");
       scanf("%d",&c);
            printf("\t\nMatriz A ");
            printf("\nIntroduce los valores de la columna:");
            printf("\nIntroduce los valores de la fila:");
        for(i=1;i<=f;i++)
        {printf("\n\t");
        for(j=1;j<=c;j++)
         {
            printf("\n\t");
            printf("posicion (%i,%i):",i,j);
            scanf("%i",&a);
            matrizA[i][j]=a;
         }
        }
            printf("\t\nMatriz B ");
            printf("\nIntroduce los valores de la columna:");
            printf("\nIntroduce los valores de la fila:");
        for(i=1;i<=f;i++)
        {
          printf("\n\t");
         for(j=1;j<=c;j++)
         {
            printf("\n\t");
            printf("posicion (%i,%i):",i,j);
            scanf("%i",&a);
            matrizB[i][j]=a;
         }
        }

        for(i=1;i<=f;i++)
        {

           for(j=1;j<=c;j++)
           {
              matrizC[i][j]=matrizA[i][j] + matrizB[i][j];
              printf("\nLa suma es:");
              printf("(%i,%i):",i,j);
              printf("%i",matrizC[i][j]);
           }
        }
          getch();
          getch();
       }
       //tres matrices
if (p==2){
puts("Suma de tres matrices");
puts("\n\t");
int matrizA[10][10],matrizB[10][10],matrizC[10][10], matrizD[10][10],matrizR[10][10];
    printf("\n\n¿Cuantas filas globales deseas?:");
    scanf("%d",&f);
    printf("\n¿Cuantas columnas globales deseas?:");
    scanf("%d",&c);
    printf("\t\nMatriz A ");
    printf("\nIntroduce los valores de la columna:");
    printf("\nIntroduce los valores de la fila:");
        for(i=1;i<=f;i++)
        {printf("\n\t");
        for(j=1;j<=c;j++)
         {
            printf("\n\t");
            printf("posicion (%i,%i):",i,j);
            scanf("%i",&a);
            matrizA[i][j]=a;
         }//hacer que pueda sumar diferentes filas con difrentes columnas
        }
        printf("\t\nMatriz B ");
        printf("\nIntroduce los valores de la columna:");
        printf("\nIntroduce los valores de la fila:");
        for(i=1;i<=f;i++)
        {
          printf("\n\t");
         for(j=1;j<=c;j++)
         {
            printf("\n\t");
            printf("posicion (%i,%i):",i,j);
            scanf("%i",&a);
            matrizB[i][j]=a;
         }
        }
        printf("\t\nMatriz C ");
        printf("\nIntroduce los valores de la columna:");
        printf("\nIntroduce los valores de la fila:");
        for(i=1;i<=f;i++)
        {
          printf("\n\t");
         for(j=1;j<=c;j++)
         {
            printf("\n\t");
            printf("posicion (%i,%i):",i,j);
            scanf("%i",&a);
            matrizC[i][j]=a;
         }
        }
        for(i=1;i<=f;i++)
        {
        for(j=1;j<=c;j++)
           {
              matrizD[i][j]=matrizA[i][j] + matrizB[i][j];
           }
        }
        for(i=1;i<=f;i++)
        {
        for(j=1;j<=c;j++)
           {
              matrizR[i][j]=matrizC[i][j] + matrizD[i][j];
             printf("\nLa suma es:");
              printf("(%i,%i):",i,j);
             printf("%i",matrizR[i][j]);
           }
        }
       }
if (p==3){
        printf("Upgrade APP\n");
        printf("Por favor compre la version PRO en la Store");

       }
         getch();
          getch();

       }


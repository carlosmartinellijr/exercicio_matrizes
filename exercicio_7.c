#include <stdio.h>

main(){
int mat[10][10], i, j, a=0;

    printf("Exercicio 6\n");

    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            if(i < j){
                a = 2 * i + 7 * j - 2;
                mat[i][j] = a;
            }
            else if(i == j){
                a = 3 * i * 2 - 1;
                mat[i][j] = a;
            }
            else{
                a = 4 * i * 3 - 5 * (j * 2) + 1; // ver qual é a dessa
                mat[i][j] = a;

            }
        }
    }

      for(i=0; i<10; i++){
        for(j=0; j<10; j++){
                printf("%i ", mat[i][j]);
        }
        printf("\n");
      }


}


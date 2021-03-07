#include <stdio.h>

int main()
{
    int i,j;
    

   int matrizC[5][5] = {{1,2,3,4,5},
                        {4,3,7,5,1},
                        {5,7,3,1,0},
                        {0,2,4,1,6},
                        {8,4,2,7,1}};
    
    for(int i = 0; i<5; i++){
        for(j=0;j<5;j++){
            printf(" %i ", matrizC[i][j]);
        }printf("\n");
    }
    

    return 0;
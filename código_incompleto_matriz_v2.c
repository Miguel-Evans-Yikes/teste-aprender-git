#include <stdio.h>


int main()
{   
    int a = 5;
    int b = 5;
    int i,j;
    int matrizC[a][b];
    
    
    while(b>0){
        
        printf("Digite o valor da linha da matriz: ");
        
        scanf("%i", &matrizC[0][b]);
        
        b--;
        
        if(b<=0){
           
            while(a>0){
               
               printf("Digite o valor da coluna da matriz: ");
               
               scanf("%i", &matrizC[a][0]); 
               
               a--;
                
            }
        }
    }
    
    for(i=0;i<b;i++){
        printf("\t%i",matrizC[0][i]);
        for(j=0;j<a;j++){
            printf("\t%i\n",matrizC[j][0]);

        }
        
    }
    return 0;
}

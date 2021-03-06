#include <stdio.h>

int main()
{
    int a,b;
    
    printf("Digite o numero de linhas e colunas da matriz: ");
    scanf("%d""%d",&a,&b);
    
    int SquareMatrix[a][b];
    
    if(a == b){
        
        do{
            printf("Digite o valor da linha da matriz: ");
            scanf("%d",&SquareMatrix[a][0]);
            a--;
        
            
        }while(a>0);
        
        for(int i=0; i<a;i++){
            printf("\nO valor do vetor e: ", SquareMatrix[i][0]);
            } 
        
        
        
    }else{
        printf("A matriz precisa ser quadrada!\nLogo, o valor de 'a' deve ser igual ao de 'b'");
    }
    
    
           
           
    return 0;
}
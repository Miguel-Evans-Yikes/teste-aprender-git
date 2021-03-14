#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int QtdLetras(){
    
    char palavra[50];
    int x, i, a, qdeLetras;
    
    
    printf("Digite palavras e direi a quantidade de letras digitadas: ");
    gets(palavra);
    
    for(i=0; i<strlen(palavra); i++){
        if(palavra[i]==' '){
            palavra[i]=palavra[i+1];
            
            
        }   
    }
    
    qdeLetras = strlen(palavra);
    printf("\nA quantidade de letras digitas foi: %d\n", qdeLetras);
    
}


int main(){

    QtdLetras();
    
    return 0;
}
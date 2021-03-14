#include<stdio.h>
#include<string.h>

int countchar(char p[], char c){

	int count = 0;
	for(int i = 0;i<strlen(p); i++){
		if(p[i]==c){
			count++;
		}
	}

	return count;
}

int main(){

	char palavra[100], busca;

	printf("Digite uma palavra: ");
	scanf("%[^\n]s", palavra);
	scanf("%c",&busca);

	printf("Digite o caractere a ser procurado: ");
	scanf("%c", &busca);

	printf("A letra %c aparece %d vezes na palavra", busca, countchar(palavra,busca) );

	return 0;
}
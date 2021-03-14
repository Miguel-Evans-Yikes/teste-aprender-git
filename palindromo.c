#include<stdio.h>

int palindromo(char p[]){
	int t = strlen(p);

	for(int i = 0;i<t/2; i++){
		if(p[i]!=p[t-i-1]){
			return 0;
		}
	}

	return 1;
}

int main(){

	char palavra[100];

	printf("Digite uma palavra: ");
	scanf("%s", palavra);

	if(palindromo(palavra)){
		printf("A palavra %s e palindroma!\n", palavra);
	}
	else{
		printf("A palavra %s nao e palindroma!\n", palavra);
	}
	return 0;
}
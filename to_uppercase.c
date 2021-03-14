#include<stdio.h>
#include<string.h>

void upercase(char p[]){

	for(int i = 0; i<strlen(p); i++){
		if(p[i]>='a' && p[i]<='z'){		//Ã© um caractere alfabetico minusculo?
			p[i] = p[i] - 'a' +'A';
		}
	}
}

int main(){

	char palavra[100];

	printf("Digite uma palavra: ");
	scanf("%[^\n]s", palavra);

	upercase(palavra);

	printf("A palvra digitada foi: %s", palavra);
	return 0;
}
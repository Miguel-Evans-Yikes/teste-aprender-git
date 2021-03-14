#include<stdio.h>
#include<string.h>


void letterShifter(char w[]){

	for(int i = 0; i<strlen(w); i++){
		if(w[i] >='A' && w[i]<='Z'){		
			w[i] = w[i] - 'A' +'a';
	
		}else if(w[i] >='a' && w[i]<='z'){
		    w[i] = w[i] - 'a' +'A';
		}
	
	  }
	
	
}



int main(){

	char word[100];

	printf("Digite uma palavra ou frase: ");
	scanf("%[^\n]s", word);

	letterShifter(word);

	printf("A palvra digitada foi: %s", word);
	return 0;
}
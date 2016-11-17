#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>



bool teste(int *p, int *q){

	if(*p==*q){){//testa se o chute foi certeiro

		printf("Voce acertou! \n ");
		return true;//se true, sai do while na função principal

	}else{

		if(*p<*q){//se não, testa se é maior que o número

			printf("chute mais alto \n");
			return false;

		}else{

			printf("chute mais baixo \n");
			return false;

		}

	}
}

int erro(int x, int *q){
	if(*q < x){
		return x-*q;
	}else{
		return *q-x;
	}
}



main(){

	int i,err, n, chute, tentativas=0;
	int *p, *q;
	int  v[10];
	

	setlocale(LC_ALL, "Portuguese");//capricho

	//srand() junto com o rand() para gerar os aleatórios na faixa 0-1000

	srand( (unsigned)time(NULL) );

	n=rand() % 1000;

	q=&n;
	
	printf("Olá! Você tem 10 tentativas para acertar um número de 1 a 1000. Boa sorte! \n");

	do{
		printf("Tentativa num %d . Dê um chute: \n", tentativas+1);

	
		scanf("%d", &chute);

		p=&chute;

		if (teste(p,q) == true){//teste() testa se o chute foi certo, baixo ou auto demais

			break;//se for certo sai do laço
		}
		v[tentativas]=chute;;//adiciona o chute a uma posição de um vetor

		tentativas=tentativas+1;;//incrementa o n de tentativas p/ a próxima volta 		

	}while(tentativas<10));//assegura  as 10 tentativas maximas
	
	if(chute!=n){
		printf("\n \n Você estourou seu número máximo de tentativas. \n");
		printf("A resposta certa seria %d. \n", *q);
		printf("\n Seu chutes foram: \n");
		for(i=0;i<=9;i++){//expõe todos os chutes dados
			printf("%d ", v[i]);	
		}
	
		printf("\n Margens de Erro: \n");
		for(i=0;i<=9;i++){
			err=erro(v[i], q);//erro() calcula a margem de erro p/ cara resposta
			printf("%d ",err);//printa cada erro numa lista horizontal
		}
	
		printf("\n Obrigado por Jogar! \n");
		
	}else{
		for(i=0;i<=tentativas;i++){
			printf("%d ", v[i]);//expõe todos os chutes dados	
		}
		printf("\n Obrigado por Jogar! \n");
	}
	
	
	

}

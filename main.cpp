#include <iostream>
#include <stdio.h>


int main() {
    char nome[40];
    int anonasc, anoatual, idade;
    int loop = 0;
    char continuar;

    
   do{
    printf("\nDigite seu nome: ", loop);
	fgets(nome, sizeof(nome), stdin); 
    
    printf("Digite seu ano de nascimento (AAAA): ");
    scanf("%d", &anonasc);
    
    printf("Digite o ano atual (AAAA): ");
    scanf("%d", &anoatual);

idade= anoatual - anonasc;

	printf("Sua idade atual � de: %d anos\n", idade);   
	
	  	
 loop++;

        // Perguntando se o usu�rio deseja continuar
        printf("\nDeseja continuar? Digite S para sim ou N para n�o: \n");
        getchar(); // Limpa o buffer
        scanf("%c", &continuar);

        // Limpa o buffer ap�s a leitura do caractere
        while (getchar() != '\n');

        // Se o usu�rio escolher "sim", resetamos o loop para 0
        if (continuar == 'S' || continuar == 's') {
            loop = 0;
        }

    } while (continuar == 'S' || continuar == 's');

    printf("Programa encerrado ap�s %d intera��es.\n\n", loop);
    return 0;
}



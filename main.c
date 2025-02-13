#include <stdio.h>
#include <stdlib.h>

#include <string.h> //(Para se comparar o conte�do de dois strings deve-se usar a fun��o strcmp. Essa fun��o ir� fazer a compara��o, 
//caractere a caractere, dos dois par�metros informados. Como n�o � alterado o conte�do de nenhum par�metro, 
//pode ser informado um valor constante em qualquer um deles, apesar de se fazer mais sentido usar a constante como segundo par�metro.)


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char nomeproduto [60]; //O tipo char serve para armazenar UM, e somente UM, caractere nesse caso= nomeproduto
	int quantidadeestoque;
	char cor[10]; 
	float preco; //  float e double s�o tipos especialmente feitos para que possamos trabalhar com n�meros reais (decimais).
	
	
	//amarzenando valores
	printf("Digite o nome do produto:");
	fgets(nomeproduto, sizeof(nomeproduto), stdin); //fgets = fluxo (armazena o resultado em string e inclui um caractere nulo (\0) no t�rmino da cadeia.)
	                                               //sizeof= O operador sizeof indica o tamanho, em bytes, do tipo da vari�vel. 
//Esse operador permite que voc� evite especificar tamanhos de dados dependentes do computador em seus programas.
	
    	printf("Digite a quantidade em estoque:");
    	scanf("%d", &quantidadeestoque); // %d = qtd de uma vari�vel inteira = n�meros
  		
        	printf("Digite a cor do produto(Verde, Azul, Vermelho):");
        	scanf("%s", cor); //%s = cor � uma string = uma palavra e n�o um numero
	
		
	//criando condi��es 
	if (strcmp (cor,"verde")==0){  // Essa fun��o (strcmp) ir� fazer a compara��o, caractere a caractere, dos dois par�metros informados. 
		preco = 10,00; //(no caso o 0 indica que os par�metros s�o iguais;)
		
     	} else if (strcmp(cor, "azul")==0){ //se caso seje azul
		preco = 30,00;
		
	    	} else if (strcmp(cor, "vermelho")==0){ //se caso seje vermelho
	    	preco = 50,00;
	    	
	            } else { //sen�o fa�a
	        	preco = 100,00;
		}
	
	
	//exibindo as informa��es 
	printf("\nNome do Produto: %s", nomeproduto);
	printf("Quantidade em estoque: %d\n", quantidadeestoque);
	printf("Cor: %s\n", cor);
	printf("Preco sugerido: R$ %.2f\n", preco);
		
	return 0;
}

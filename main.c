#include <stdio.h>
#include <stdlib.h>

#include <string.h> //(Para se comparar o conteúdo de dois strings deve-se usar a função strcmp. Essa função irá fazer a comparação, 
//caractere a caractere, dos dois parâmetros informados. Como não é alterado o conteúdo de nenhum parâmetro, 
//pode ser informado um valor constante em qualquer um deles, apesar de se fazer mais sentido usar a constante como segundo parâmetro.)


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char nomeproduto [60]; //O tipo char serve para armazenar UM, e somente UM, caractere nesse caso= nomeproduto
	int quantidadeestoque;
	char cor[10]; 
	float preco; //  float e double são tipos especialmente feitos para que possamos trabalhar com números reais (decimais).
	
	
	//amarzenando valores
	printf("Digite o nome do produto:");
	fgets(nomeproduto, sizeof(nomeproduto), stdin); //fgets = fluxo (armazena o resultado em string e inclui um caractere nulo (\0) no término da cadeia.)
	                                               //sizeof= O operador sizeof indica o tamanho, em bytes, do tipo da variável. 
//Esse operador permite que você evite especificar tamanhos de dados dependentes do computador em seus programas.
	
    	printf("Digite a quantidade em estoque:");
    	scanf("%d", &quantidadeestoque); // %d = qtd de uma variável inteira = números
  		
        	printf("Digite a cor do produto(Verde, Azul, Vermelho):");
        	scanf("%s", cor); //%s = cor é uma string = uma palavra e não um numero
	
		
	//criando condições 
	if (strcmp (cor,"verde")==0){  // Essa função (strcmp) irá fazer a comparação, caractere a caractere, dos dois parâmetros informados. 
		preco = 10,00; //(no caso o 0 indica que os parâmetros são iguais;)
		
     	} else if (strcmp(cor, "azul")==0){ //se caso seje azul
		preco = 30,00;
		
	    	} else if (strcmp(cor, "vermelho")==0){ //se caso seje vermelho
	    	preco = 50,00;
	    	
	            } else { //senão faça
	        	preco = 100,00;
		}
	
	
	//exibindo as informações 
	printf("\nNome do Produto: %s", nomeproduto);
	printf("Quantidade em estoque: %d\n", quantidadeestoque);
	printf("Cor: %s\n", cor);
	printf("Preco sugerido: R$ %.2f\n", preco);
		
	return 0;
}

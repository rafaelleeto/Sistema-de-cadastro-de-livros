#include <stdio.h>


void consulta(){

    int codigo;

    printf("Digite o codigo de barras que voce deseja procurar: ");
    scanf("%d",&codigo);
    fflush(stdin);

    printf("\n\n\n");
    printf("Titulo: %c \n",cadastro[codigo].titulo);
    printf("Autor: %c \n",cadastro[codigo].autor);
    printf("Ano de publicacao: %d \n",cadastro[codigo].ano_de_publicacao);
    printf("Valor: %d \n",cadastro[codigo].valor);

}
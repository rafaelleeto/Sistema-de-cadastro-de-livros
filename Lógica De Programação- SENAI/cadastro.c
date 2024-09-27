#include <stdio.h>



void cada(){

    printf("Informe o código de barras: ");
    scanf("%d",&cadastro[i].codigo_de_barras);
    fflush(stdin);
    
    printf("Informe o titulo do livro: ");
    fgets(cadastro[i].titulo,100, stdin);

    printf("Informe o autor do livro: ");
    fgets(cadastro[i].autor,100, stdin);

    printf("Informe o ano da publicacao: ");
    scanf("%d",&cadastro[i].ano_de_publicacao);
    fflush(stdin);

    printf("Informe a quantidade total em estoque: ");
    scanf("%d",&cadastro[i].quantidade);
    fflush(stdin);

    printf("Informe o valor de venda: ");
    scanf("%d",&cadastro[i].valor);
    fflush(stdin);
    return 0;
}
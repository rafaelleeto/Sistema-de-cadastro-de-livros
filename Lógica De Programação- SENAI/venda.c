#include <stdio.h>

void venda(){
    int soma=0;
    int barra;
    int unidades;

    estoque();

    printf("Digite o código de barras do livro: ");
    scanf("%d",&barra);


    printf("Informe a quantidade de unidades: ");
    scanf("%d",&unidades);

    cadastro[i].quantidade=cadastro[i].quantidade-unidades;


    for (i = 0; i < 100; i++) {
        if (cadastro[i].codigo_de_barras == barra) {
            if (cadastro[i].quantidade >= unidades) {
                cadastro[i].quantidade -= unidades;
                soma += cadastro[i].valor * unidades;
                printf("BIP\n");
                if (cadastro[i].quantidade == 0) {
                    cadastro[i].ano_de_publicacao = 0;
                    cadastro[i].autor[0] = '\0';
                    cadastro[i].codigo_de_barras = 0;
                    cadastro[i].titulo[0] = '\0';
                    cadastro[i].valor = 0.0;
                }
            } else {
            }
            break; 
        }
    }

    printf("Preço total dos livros: %d",soma);
    
}
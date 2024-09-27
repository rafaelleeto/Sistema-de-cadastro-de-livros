#include <stdio.h>

struct menu 
{
    int codigo_de_barras;
    char titulo[100];
    char autor[100];
    int ano_de_publicacao;
    int quantidade;
    int valor;
};

struct menu cadastro[100];
int i=0;

#include "cadastro.c"
#include "consulta.c"
#include "estoque.c"
#include "venda.c"

int main(){
    int opcao;
    
    do
    {
        printf("\n1-Cadastro\n2-Consulta\n3-Venda\n4-Estoque\n0-Sair");
        scanf("%d",&opcao);
        switch (opcao)
        {
        case 1:
            cada();
            break;

        case 2:
            consulta();
            break;

        case 3:
            venda();
            break;
        
        case 4:
            estoque();
            break;

        default:
            break;
        }


    } while (opcao!=0);


    return 0;

}       
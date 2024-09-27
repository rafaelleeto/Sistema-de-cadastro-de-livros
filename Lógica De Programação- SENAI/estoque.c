#include<stdio.h>
   
void estoque(){

    printf("\n=====================\n");
    printf("     MENU DE LIVROS   \n");
    printf("=====================\n");
    printf("Código de Barras | Nome do Livro                  | Autor do Livro\n");
    printf("---------------------------------------------------------------\n");
    
    for (int i = 0; i < 100; i++) {
        if (cadastro[i].codigo_de_barras != 0) { 
            printf("%-16d | %-30s | %-20s\n", 
                   cadastro[i].codigo_de_barras, 
                   cadastro[i].titulo, 
                   cadastro[i].autor);
        }
    }
    
    printf("---------------------------------------------------------------\n");

}


#include <stdio.h>

#define MAX_LIVROS 100 // Defina um limite para o número de livros

typedef struct {
    int codigo_de_barras;
    char titulo[100];
    char autor[100];
    int ano_de_publicacao;
    float valor;
    int quantidade;
} Livro;

Livro cadastro[MAX_LIVROS]; // Array de livros

void exibir_menu() {
    printf("\n=====================\n");
    printf("     MENU DE LIVROS   \n");
    printf("=====================\n");
    printf("Código de Barras | Nome do Livro                  | Autor do Livro\n");
    printf("---------------------------------------------------------------\n");
    
    for (int i = 0; i < MAX_LIVROS; i++) {
        if (cadastro[i].codigo_de_barras != 0) { // Apenas exibir livros cadastrados
            printf("%-16d | %-30s | %-20s\n", 
                   cadastro[i].codigo_de_barras, 
                   cadastro[i].titulo, 
                   cadastro[i].autor);
        }
    }
    
    printf("---------------------------------------------------------------\n");
}

int main() {
    // Aqui você pode inicializar seu array de livros e chamar exibir_menu()
    // Exemplo de adição de livros
    cadastro[0] = (Livro){123456, "O Senhor dos Anéis", "J.R.R. Tolkien", 1954, 39.90, 10};
    cadastro[1] = (Livro){654321, "1984", "George Orwell", 1949, 29.90, 5};
    
    exibir_menu();
    
    return 0;
}

#include <stdio.h>
#include <string.h> // para strcmp()
#define TAMANHO_ACERVO 20 // constante que define o limite de livros

// Estrutura que representa um livro
struct Livro {
    int codigo; //variavel para armazenar o codigo 
    char titulo[50]; //variavel para armazenar título do livro
    char autor[30]; // variavel para armazenar o autor
    char area[30]; // variavel para armazenar area 
    int ano; // variavel para armazenar ano de edição do livro
    char editora[30]; //variavel para armazenar a editora do livro
};
void cadastrarLivros(struct Livro acervo[], int tamanho) { //função para cadastrar os livros
    for (int i = 0; i < tamanho; i++) {
        printf("\n--- Cadastro do Livro %d ---\n", i + 1);
        printf("Codigo: ");
        scanf("%d", &acervo[i].codigo);
        fflush(stdin);
        printf("Titulo: ");
        fgets(acervo[i].titulo, 50, stdin);
        acervo[i].titulo[strcspn(acervo[i].titulo, "\n")] = 0; // remove \n

        printf("Autor: ");
        fgets(acervo[i].autor, 30, stdin);
        acervo[i].autor[strcspn(acervo[i].autor, "\n")] = 0;

        printf("Area: ");
        fgets(acervo[i].area, 30, stdin);
        acervo[i].area[strcspn(acervo[i].area, "\n")] = 0;

        printf("Ano de publicacao: ");
        scanf("%d", &acervo[i].ano);
        fflush(stdin);

        printf("Editora: ");
        fgets(acervo[i].editora, 30, stdin);
        acervo[i].editora[strcspn(acervo[i].editora, "\n")] = 0;
    }
}
void imprimirLivros(struct Livro acervo[], int tamanho) { //função para imprir so livros
    printf("\n--- LISTA DE LIVROS ---\n");
    for (int i = 0; i < tamanho; i++) {
        printf("\nCodigo: %d", acervo[i].codigo);
        printf("\nTitulo: %s", acervo[i].titulo);
        printf("\nAutor: %s", acervo[i].autor);
        printf("\nArea: %s", acervo[i].area);
        printf("\nAno: %d", acervo[i].ano);
        printf("\nEditora: %s\n", acervo[i].editora);
    }
}
void pesquisarLivro(struct Livro acervo[], int tamanho, int codigoBusca) { //função para pesquisar os livros por codigo 
    int encontrado = 0; //variavel

    for (int i = 0; i < tamanho; i++) {
        if (acervo[i].codigo == codigoBusca) {
            printf("\nLivro encontrado!\n");
            printf("Titulo: %s\nAutor: %s\nArea: %s\nAno: %d\nEditora: %s\n",
                   acervo[i].titulo, acervo[i].autor, acervo[i].area,
                   acervo[i].ano, acervo[i].editora);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("\nLivro com codigo %d nao encontrado.\n", codigoBusca);
    }
}
void ordenarLivros(struct Livro acervo[], int tamanho) { // função para ordenar livros por ano de publicação
    struct Livro temp;

    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (acervo[j].ano > acervo[j + 1].ano) {
                temp = acervo[j];
                acervo[j] = acervo[j + 1];
                acervo[j + 1] = temp;
            }
        }
    }

    printf("\nLivros ordenados por ano de publicacao!\n");
}
int main() { // menu principal 
    struct Livro acervo[TAMANHO_ACERVO];
    int opcao, codigoBusca; //variaveis

    do {
        printf("\n--- MENU PRINCIPAL ---\n");
        printf("1 - Cadastrar livros\n");
        printf("2 - Imprimir todos os livros\n");
        printf("3 - Pesquisar livro por codigo\n");
        printf("4 - Ordenar livros por ano\n");
        printf("5 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarLivros(acervo, TAMANHO_ACERVO);
                break;
            case 2:
                imprimirLivros(acervo, TAMANHO_ACERVO);
                break;
            case 3:
                printf("Digite o codigo do livro que deseja pesquisar: ");
                scanf("%d", &codigoBusca);
                pesquisarLivro(acervo, TAMANHO_ACERVO, codigoBusca);
                break;
            case 4:
                ordenarLivros(acervo, TAMANHO_ACERVO);
                break;
            case 5:
                printf("\nEncerrando o programa...\n"); // encerrar o programa 
                break;
            default:
                printf("\nOpcao invalida!\n"); // opção invalida caso o usuario digite um numero diferente das opções de menu
        }

    } while (opcao != 5);

    return 0;
}

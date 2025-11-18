#include <stdio.h>
#include <string.h>

#define TAMANHO_ACERVO 20

// Estrutura do livro
struct Livro {
    int codigo;
    char titulo[50];
    char autor[30];
    char area[30];
    int ano;
    char editora[30];
};

// Cadastrar apenas 1 livro por vez
void cadastrarLivro(struct Livro acervo[], int *qtdLivros) {
    if (*qtdLivros >= TAMANHO_ACERVO) {
        printf("\nLimite maximo de livros atingido!\n");
        return;
    }

    int i = *qtdLivros;

    printf("\n--- Cadastro do Livro %d ---\n", i + 1);
    printf("Codigo: ");
    scanf("%d", &acervo[i].codigo);
    fflush(stdin);

    printf("Titulo: ");
    fgets(acervo[i].titulo, 50, stdin);
    acervo[i].titulo[strcspn(acervo[i].titulo, "\n")] = 0;

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

    (*qtdLivros)++; // aumenta o contador de livros

    printf("\nLivro cadastrado com sucesso!\n");
}

void imprimirLivros(struct Livro acervo[], int qtdLivros) { //funcão para imprimir os livros
    if (qtdLivros == 0) {
        printf("\nNenhum livro cadastrado ainda.\n");
        return;
    }

    printf("\n--- LISTA DE LIVROS ---\n");
    for (int i = 0; i < qtdLivros; i++) {
        printf("\nCodigo: %d", acervo[i].codigo);
        printf("\nTitulo: %s", acervo[i].titulo);
        printf("\nAutor: %s", acervo[i].autor);
        printf("\nArea: %s", acervo[i].area);
        printf("\nAno: %d", acervo[i].ano);
        printf("\nEditora: %s\n", acervo[i].editora);
    }
}

void pesquisarLivro(struct Livro acervo[], int qtdLivros, int codigoBusca) { //função para pesquisar os livros por codigo
    if (qtdLivros == 0) {
        printf("\nNenhum livro cadastrado para pesquisar.\n");
        return;
    }

    for (int i = 0; i < qtdLivros; i++) {
        if (acervo[i].codigo == codigoBusca) {
            printf("\nLivro encontrado!\n");
            printf("Titulo: %s\nAutor: %s\nArea: %s\nAno: %d\nEditora: %s\n",
                   acervo[i].titulo, acervo[i].autor, acervo[i].area,
                   acervo[i].ano, acervo[i].editora);
            return;
        }
    }

    printf("\nLivro com codigo %d nao encontrado.\n", codigoBusca);
}

void ordenarLivros(struct Livro acervo[], int qtdLivros) { // função para ordenar livros por ano de publicação
    if (qtdLivros < 2) {
        printf("\nÉ necessario pelo menos 2 livros para ordenar.\n");
        return;
    }

    struct Livro temp;

    for (int i = 0; i < qtdLivros - 1; i++) {
        for (int j = 0; j < qtdLivros - i - 1; j++) {
            if (acervo[j].ano > acervo[j + 1].ano) {
                temp = acervo[j];
                acervo[j] = acervo[j + 1];
                acervo[j + 1] = temp;
            }
        }
    }

    printf("\nLivros ordenados por ano de publicacao!\n");
}

int main() {
    struct Livro acervo[TAMANHO_ACERVO];
    int opcao, codigoBusca;
    int qtdLivros = 0; // CONTADOR DE LIVROS CADASTRADOS

    do {
        printf("\n--- MENU PRINCIPAL ---\n");
        printf("1 - Cadastrar livro\n");
        printf("2 - Imprimir livros\n");
        printf("3 - Pesquisar livro por codigo\n");
        printf("4 - Ordenar livros por ano\n");
        printf("5 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) { // menu de opções
            case 1:
                cadastrarLivro(acervo, &qtdLivros);
                break;

            case 2:
                imprimirLivros(acervo, qtdLivros);
                break;

            case 3:
                printf("Digite o codigo do livro: ");
                scanf("%d", &codigoBusca);
                pesquisarLivro(acervo, qtdLivros, codigoBusca);
                break;

            case 4:
                ordenarLivros(acervo, qtdLivros);
                break;

            case 5:
                printf("\nEncerrando o programa...\n");
                break;

            default:
                printf("\nOpcao invalida!\n");
        }

    } while (opcao != 5); // repetir até o usuario escolher sair

    return 0;
}

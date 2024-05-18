//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Constantes
#define tamanho 20

//Estrutura da Senha
typedef struct tsenha {
    int numero;
    char tipo;
} tsenha;

//Estrutura da Fila
struct tfilabanco {
    tsenha dados[tamanho];
    int ini;
    int fim;
};

//Variáveis globais
struct tfilabanco fila;
int op, proximo;

//Prototipação
void fila_entrar();
void fila_sair();
void fila_mostrar();
void menu_mostrar();

//Função principal
int main(){
    setlocale(LC_ALL, "Portuguese");
    op = 1;
    proximo = 1;
    fila.ini = 0;
    fila.fim = 0;
    while (op != 0) {
        system("cls");
        fila_mostrar();
        menu_mostrar();
        scanf("%d", &op);
        switch (op) {
            case 1:
                fila_entrar();
                break;
            case 2:
                fila_sair();
                break;
        }
    }
    return 0;
}

//Adicionar um elemento no final da Fila
void fila_entrar(){
    if (fila.fim == tamanho) {
        printf("\nA fila está cheia, volte outro dia!\n\n");
        system("pause");
        return;
    }

    char tipo;
    printf("\nEscolha o tipo do atendimento:");
    printf("\nC - Comum");
    printf("\nP - Prioridade");
    printf("\nR - Rápido: ");
    scanf(" %c", &tipo);
    if (tipo != 'C' && tipo != 'P' && tipo != 'R') {
        printf("\nTipo de atendimento inválido!\n\n");
        return;
    }
    fila.dados[fila.fim].tipo = tipo;
    fila.dados[fila.fim].numero = proximo;
    proximo++;
    fila.fim++;
}

//Retirar o primeiro elemento da Fila de acordo com o caixa
void fila_sair() {
    if (fila.ini == fila.fim) {
        printf("\nFila vazia, mas logo aparece alguém!\n\n");
        system("pause");
    } else {
        int caixa;
        char tipoatendimento;
        printf("\nQual caixa vai atender (1 a 4)?: ");
        scanf("%d", &caixa);
        switch (caixa) {
            case 1:
                tipoatendimento = 'P';
                break;
            case 2:
            case 3:
                tipoatendimento = 'C';
                break;
            case 4:
                tipoatendimento = 'R';
                break;
            default:
                printf("\nValor inválido!");
                return;
        }
        // Define a posição do elemento a ser removido como 0
        int posicao = 0;

        // Procura elemento do tipo correspondente
        int i;
        for (i = 0; i < tamanho; i++) {
            if (fila.dados[i].tipo == tipoatendimento) {
                posicao = i;
                break;
            }
        }

        printf("\n\n###### ATENDIMENTO #########\n");
        printf("Senha: %c-%d\n", fila.dados[posicao].tipo, fila.dados[posicao].numero);
        printf("Caixa: %d\n", caixa);
        printf("###### ATENDIMENTO #########\n\n");

        // Retira elemento da posição e move os demais
        for (; i < tamanho - 1; i++) {
            fila.dados[i].numero = fila.dados[i + 1].numero;
            fila.dados[i].tipo = fila.dados[i + 1].tipo;
        }
        fila.fim--;
    }
}

//Mostrar o conteúdo da Fila
void fila_mostrar() {
    int i;
    printf("[ ");
    for (i = 0; i < fila.fim; i++) {
        printf("%c-%d ", fila.dados[i].tipo, fila.dados[i].numero);
    }
    printf("]\n\n");
}

//Mostrar o menu de opções
void menu_mostrar() {
    printf("\nEscolha uma opção:\n");
    printf("1 - Nova senha\n");
    printf("2 - Atender\n");
    printf("0 - Sair\n\n");
}



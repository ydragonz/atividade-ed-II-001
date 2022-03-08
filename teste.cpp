#include <stdio.h>
#include <stdlib.h>
#define MAX_PAPEIS 50

void menu(struct Papel &, int *);

void cadastrar(Papel *papeis, int *);

void listar();

void info();

void destaques();

int main() {

    typedef struct Papel{
        char sigla[5];
        float val_abert, val_min, val_max, val_fecha, val_med;
    };

    Papel papeis[MAX_PAPEIS];
    int qtd_papel=0; // Quantidade atual de papeis registrados.

    menu(papeis, &qtd_papel);

    return 0;
}

void menu(struct Papel & papeis, int *qtd_papel) {
    
    int opcao=0;
    
    do {
        system("cls");
        printf("====== MENU ======\nEscolha uma opcao:\n1) Cadastrar\n2) Listar acoes\n3) Informacoes de um papel\n4) Maior valorizacao e maior queda\n0) Sair\n\nEscolha: ");
        printf("%d", *qtd_papel);
        //*qtd_papel = *qtd_papel +1;
        printf("\n%d", *qtd_papel);
        scanf("%d", &opcao);

        *papeis[0].sigla = "Teste";

        switch(opcao) {
            case 1:
                cadastrar(papeis, &qtd_papel);
                break;
            case 2:
                listar();
                break;
            case 3:
                info();
                break;
            case 4:
                destaques();
                break;
            case 0:
                exit(0);
                break;
        }
    } while(opcao!=0);
}

void cadastrar(struct Papel *papeis, int *qtd_papel) {
    float teste;
    system("cls");
    printf("====== CADASTRO ======\nDigite a sigla do papel: ");
    //scanf("%f", teste);


    //*qtd_papel = *qtd_papel + 1;

    printf("\n%d", *qtd_papel);

    system("pause");
}

void listar() {

}

void info() {

}

void destaques() {

}
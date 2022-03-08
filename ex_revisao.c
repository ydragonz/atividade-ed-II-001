#include <stdio.h>
#include <stdlib.h>
#define MAX_PAPEIS 50

typedef struct {
    char sigla[5];
    float val_abert, val_min, val_max, val_fecha, val_med;
} Papel;

typedef struct {
    int qtd_papel;
    Papel p[MAX_PAPEIS];
} Registro;

void inicializar(Registro *r);

void menu(Registro *r);

void cadastrar(Registro *r);

void listar();

void info();

void destaques();

int main() {

    Registro r;

    inicializar(&r);
    menu(&r);

    return 0;
}

void inicializar(Registro *r) {

    r->qtd_papel = 0;
    for(int i=0; i<=MAX_PAPEIS; i++) {
        *r->p[i].sigla = "";
        r->p[i].val_abert = 0;
        r->p[i].val_fecha = 0;
        r->p[i].val_max = 0;
        r->p[i].val_med = 0;
        r->p[i].val_min = 0;
    }
}

void menu(Registro *r) {
    
    int opcao=0;
    do {
        system("cls");
        printf("====== MENU ======\n\n1) Cadastrar\n2) Listar acoes\n3) Informacoes de um papel\n4) Maior valorizacao e maior queda\n0) Sair\n\nEscolha: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                cadastrar(&r);
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
                system("cls");
                printf("Finalizando o programa...\n\n");
                break;
            default:
                system("cls");
                printf("====== ERRO ======\nOpcao invalida!\nEscolha: 1, 2, 3, 4, 5 ou 0\n\n");
                system("pause");
                break;
        }
    } while(opcao!=0);
}

void cadastrar(Registro *r) {
    system("cls");
    printf("====== CADASTRO ======\nDigite a sigla do papel: ");
    gets(r->p[r->qtd_papel].sigla);
    printf("\n\n%s", r->p[r->qtd_papel].sigla);


    //*qtd_papel = *qtd_papel + 1;

    //printf("\n%d", *qtd_papel);

    system("pause");
}

void listar() {

}

void info() {

}

void destaques() {

}
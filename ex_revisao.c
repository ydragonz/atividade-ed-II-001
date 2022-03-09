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

void listar(Registro *r);

void info(Registro *r);

void destaques(Registror *r);

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
    if(*r->qtd_papel==50) {
        printf("O sistema ja esta cheio, nao ha mais espaco disponivel");
        return;
    }

    float verifica;

    printf("====== CADASTRO ======\nDigite a sigla do papel: ");
    scanf("%s", r->p[r->qtd_papel].sigla);

    printf("\nDigite o valor de abertura: ");
    scanf("%f", &r->p[r->qtd_papel].val_abert);   

    printf("\nDigite o valor minimo: ");
    scanf("%f", &verifica);

    if(verifica > r->p[r->qtd_papel].val_min) {
        printf("\n\nErro! o valor minimo nao pode ser maior que o valor de abertura\n");
        system("pause");
        return;
    } else {
        *r->p[r->qtd_papel].val_min = verifica;
    }

    printf("\nDigite o valor maximo: ");
    scanf("%f", &verifica);

    if(verifica < r->p[r->qtd_papel].val_max) {
        printf("\n\nErro! o valor maximo nao pode ser menor que o valor de abertura\n");
        system("pause");
        return;
    } else {
        *r->p[r->qtd_papel].val_max = verifica;
    }

    printf("\nDigite o valor de fechamento: ");
    scanf("%f", &verifica);

    if(verifica >= r->p[r->qtd_papel].val_min && verifica <= r->p[r->qtd_papel].val_max) {
        *r->p[r->qtd_papel].val_fecha = verifica;
    } else {
        printf("\n\nErro! o valor do fechamento precisa estar entre o valor minimo e o valor maximo.\n");
        system("pause");
        return;
    }

    *r->p[r->qtd_papel].val_med = (*r->p[r->qtd_papel].val_fecha + *r->p[r->qtd_papel].val_abert + *r->p[r->qtd_papel].val_max + *r->p[r->qtd_papel].val_min) / 4;

    *r->qtd_papel = *r->qtd_papel + 1;
    system("cls");
    printf("------------------\n|\n| Cadastrado com sucesso! \n|\n|----------------");
    system("pause");
}

void listar(Registro *r) {

}

void info() {

}

void destaques() {

}
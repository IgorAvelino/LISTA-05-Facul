#include <stdio.h>
#include <string.h>

struct Professor{
    char cpf[11];
    char nome[30];
    char titulacao[40];
};

struct Cliente{
    int codigo;
    char nome[30];
    char telefone[12];
    char email[40];
};

int main(){

    int op = 0;

    while (op != 3)
    {

        printf("\n\n-------------- Menu --------------");
        printf("\nRegistration Options:\n[1]Register Teacher\n[2]Register Customer\n[3]Exit");
        printf("\nType your option: ");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            //cadastro professor
            break;
        
        case 2:
            //cadastro cliente
            break;

        default:
            break;
        }
    }
    

    return 0;
}

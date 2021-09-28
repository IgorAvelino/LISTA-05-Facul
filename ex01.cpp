#include <stdio.h>
#include <string.h>

struct Professor{
    char cpf[11];
    char name[30];
    char titration[40];
};

struct Cliente{
    int code;
    char name[30];
    char phone[12];
    char email[40];
};

int main(){

    int op = 0;
    int count_register = 9;
    int pcount = 0;
    int ccount = 0;
    Professor prof[10];
    Cliente cli[10];

    while (op != 3)
    {

        printf("\n\n-------------- Menu --------------");
        printf("\nRegistration Options:\n[1]Register Teacher\n[2]Register Customer\n[3]Exit and Save");
        printf("\nType your option: ");
        scanf("%d", &op);

        switch (op){

        case 1:
            printf("\n\n-------------- %d's Teachers Register --------------\n", pcount+1);
            printf("CPF: ");
            fflush(stdin);
            fgets(prof[pcount].cpf, 12, stdin);

            printf("Name: ");
            fflush(stdin);
            fgets(prof[pcount].name, 30, stdin);

            printf("Titration: ");
            fflush(stdin);
            fgets(prof[pcount].titration, 40, stdin);

            pcount++;
            count_register++;
            break;
        
        case 2:
            printf("\n\n-------------- Clients Register --------------\n");
            printf("Code: ");
            fflush(stdin);
            scanf("%i", &cli[ccount].code);

            printf("Name: ");
            fflush(stdin);
            fgets(cli[ccount].name, 30, stdin);

            printf("Phone");
            fflush(stdin);
            fgets(cli[ccount].phone, 40, stdin);

            printf("Email");
            fflush(stdin);
            fgets(cli[ccount].email, 12, stdin);

            ccount++;
            count_register++;

            break;

        default:
            break;
        }

        if(count_register >= 10){
            break;
        }

    }

    printf("\n\n-------------- Database --------------\n");
    
    printf("-------------- Teachers --------------\n");
    for(int i = pcount; i < pcount; i++){
        printf("CPF: %s", prof[pcount].cpf);
        printf("Name: %s", prof[pcount].name);
        printf("Titration: %s", prof[pcount].titration);
    }

    printf("-------------- Clients --------------\n");
    for(int i = ccount; i < ccount; i++){
        printf("Code: %i", cli[ccount].code);
        printf("Name: %s", cli[ccount].name);
        printf("Phone: %s", cli[ccount].phone);
        printf("Email: %s", cli[ccount].email);
    }
    

    return 0;
}

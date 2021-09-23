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

    int op, count_register, pcount, ccount = 0;
    Professor prof[10];
    Cliente cli[10];

    while (op != 3)
    {

        printf("\n\n-------------- Menu --------------");
        printf("\nRegistration Options:\n[1]Register Teacher\n[2]Register Customer\n[3]Exit");
        printf("\nType your option: ");
        scanf("%d", &op);

        switch (op)
        {
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

            printf("\n----------------------------------------------\n");
            break;
        
        case 2:
            printf("\n\n-------------- Clients Register --------------\n");


            printf("\n----------------------------------------------\n");
            break;

        default:
            break;
        }
    }

    //register prints
    

    return 0;
}

#include <stdio.h>
#include <string.h>


main(){
char  primeiro_nome[20];
char  ultimo_sobrenome[20];
char  nomes_do_meio[60];
int   idade;
int   ano_de_nasc;
int ano=2020;


printf("\n Digite sua idade: ");
    scanf("%d",&idade );

printf(" Digite seu primeiro nome: ");
    scanf("%s", &primeiro_nome);
    
printf("\n Digite seus nomes do meio: ");
    fflush(stdin);
    fgets(nomes_do_meio,60,stdin);
    
printf("\n Digite seu ultimo sobrenome: ");
    scanf("%s", &ultimo_sobrenome );
     ano=ano-1;
     ano_de_nasc=ano-idade;   


    
printf("seu nome completo : %s %s %s\n",primeiro_nome,nomes_do_meio,ultimo_sobrenome);

printf("ano de nascimento : %d \n ",ano_de_nasc);

printf(" endereço da variavel idade :% x\n ",&idade);

  
}

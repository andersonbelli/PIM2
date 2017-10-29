#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include <stdbool.h>
#include <string.h>//necessário para manipular Strings
#include <conio.h>


/*          
        Se você resolver algum problema, escreve aqui. 
        E atualiza com os problemas que você encontrou beleza?

        Problemas:
        -Na hora de confirmar os dados, se for parceiro tem que aparecer SIM, e se não
        aparecer NÃO (esta aparecendo numero)
        -Só esta salvando um usuario de cada vez
        -Precisa acrescentar a parte de visualizar os clientes ja cadastrados

*/

int main(){
    int opc,opc2,parceiro,tamanho,rodando=1;
    char nome[35],cpf[11],idade[3],data[9],hora[9];
    char salvarNome[35]=("nome: "),salvarCPF[11]=("cpf: "),salvarIdade[10]=("idade: "),salvarDATA[20]=("data: "),salvarHORA[20]=("hora: ");
  
    FILE *usuario;
    usuario = fopen("dados\\usuario.txt","a");
  do{
      printf("\t|----- Legal Rent a Car -----|\n\n");
      printf("Menu Principal:\n Escolha uma opcao:\n\n1- Cadastro de usuario\n2- Alugar Carro\n4- Clientes cadastrados\n3- Sair\n");
      scanf("%d",&opc);
  
      switch(opc){system("CLS");
         case 1:
         system("CLS");
         printf("\t|----- Cadastro de usuario -----|\n\n");
         printf("Nome completo: ");
         scanf("%s",&nome);//%[^\n]s Faz com que o scanf só pare de ler ao teclarem ENTER
         printf("Cpf: ");
         scanf("%s",&cpf);
         tamanho = strlen(cpf);//Validação de tamanho
             while(tamanho != 11){//Verifica se o tamanho inserido é valido
                 printf("\nValor invalido, digite novamente: ");
                 scanf("%s",&cpf);
                 tamanho = strlen(cpf);
             }
         printf("Idade: ");
         scanf("%s",&idade);
         tamanho = strlen(idade);
             while(tamanho > 3){
                 printf("\nValor invalido, digite novamente: ");
                 scanf("%s",&idade);
                 tamanho = strlen(idade);
             }
         printf("Parceiro da ONG: \n1 - Sim\n2 - N\n");
         scanf("%d",&parceiro);
         _strdate( data );
         _strtime( hora );
         printf("Data :%s Hora:%s",data,hora);
     
         printf("\n\nOs dados entao corretos?\n");
         printf("Nome: %s  |  CPF: %s  |  Idade: %s  |  Parceiro: %d\n\n",nome,cpf,idade,parceiro);
         printf("1 - Sim\n2 - Nao\n");
         scanf("%d",&opc2);
         
         if(opc2 ==1){
             if(usuario == NULL){
                 printf("Ocorreu um erro");
             }else{
                 strcat(salvarNome, nome); // Concatena a string de formatação para salvar no arquivo e o nome da pessoa
                 fprintf(usuario,salvarNome); // Salvar o dado do usuario no arquivo: usuario.txt
                 fprintf(usuario,"\n");
                 strcat(salvarCPF, cpf);
                 fprintf(usuario,salvarCPF);
                 fprintf(usuario,"\n");
                 strcat(salvarIdade, idade);
                 fprintf(usuario,salvarIdade);
                 fprintf(usuario,"\n");
                 strcat(salvarDATA, data);
                 fprintf(usuario,salvarDATA);
                 fprintf(usuario,"\n");
                 strcat(salvarHORA, hora);
                 fprintf(usuario,salvarHORA);
                 fprintf(usuario,"\n\n");
                 
                 fclose(usuario);
                 
                 char salvarNome[35]=("nome: "),salvarCPF[11]=("cpf: "),salvarIdade[10]=("idade: "),salvarDATA[20]=("data: "),salvarHORA[20]=("hora: ");
                 printf("\n\tUSUARIO SALVO COM SUCESSO\n\n");
                 system("PAUSE");
                 system("CLS");
             }
         }
         break;
         
         
         
         
         
         case 3:
             rodando==0;
             system("PAUSE");
             return 0;
         }
         
     }while(rodando==1);
  //system("PAUSE");	
  //return 0;
}

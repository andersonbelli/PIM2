#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include <stdbool.h>
#include <string.h>//necess�rio para manipular Strings
#include <conio.h>


/*          
        Se voc� resolver algum problema, escreve aqui. 
        E atualiza com os problemas que voc� encontrou beleza?

        Problemas: 
        -Tentar arrumar a data para o padr�o brasileiro (Esta no Americano)
        -Idade n�o est� exibindo certo
        -Na hora de confirmar os dados, se for parceiro tem que aparecer SIM, e se n�o
        aparecer N�O (esta aparecendo numero)
        -Assim que escolher a op��o no menu principal, tem que limpar a tela (N�o lembro
        como faz) 

*/

int main(){
    int opc,opc2,parceiro,tamanho;
    char nome[30],cpf[11],idade[3],data[9],hora[9];
  
  printf("\t|----- Legal Rent a Car -----|\n\n");
  printf("Menu Principal:\n Escolha uma opcao:\n\n1- Cadastro de usuario\n2- Alugar Carro\n4- Clientes cadastrados\n3- Sair\n");
  scanf("%d",&opc);
  
  switch(opc){
     system("CLS");
     case 1:
     printf("\t|----- Cadastro de usuario -----|\n\n");
     printf("Nome completo: ");
     scanf("%s",&nome);//%[^\n]s Faz com que o scanf s� pare de ler ao teclarem ENTER
     printf("Cpf: ");
     scanf("%s",&cpf);
        tamanho = strlen(cpf);//Valida��o de tamanho
           while(tamanho != 11){//Verifica se o tamanho inserido � valido
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
     printf("Nome: %s  |  CPF: %s  |  Idade: %d  |  Parceiro: %d\n\n",nome,cpf,idade,parceiro);
     printf("1 - Sim\n2 - N\n");
     scanf("%d",&opc2);

  }
  //system("PAUSE");	
  //return 0;
}

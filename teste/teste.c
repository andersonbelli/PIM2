#include <stdio.h>
int main(void){
    FILE *arquivo;
    arquivo = fopen("teste.txt","a");
    
    //char nome[30],nome1[30];
    
    if(arquivo == NULL){
        printf("Deu ruim men");
        getchar();
        exit(0);
    }
    
    char x[100];
    fgets(x,100,stdin); // stdin = entrada padrão - teclado 
    printf("%s",x);
    system("PAUSE");
    
    
    char frase[] = "\nid=2\n";
    fputs(frase, arquivo);
    char caractere = '3';
    fputc(caractere,arquivo);
    system("PAUSE");
    fclose(arquivo);
    
    char frase[100];
    while(fgets(frase,100,arquivo) != NULL){ 
    // fgets - file get string - parametros(nome da variavel, quantidade de caracteres, ponteiro do arquivo)
            printf("%s", frase);
    }
    system("PAUSE");
    fclose(arquivo);
    
    fprintf(arquivo,"\nOutro teste só men rlx"); // fprint - FILE
    fscanf(arquivo,"%s %s",&nome,&nome1); // fscanf - ler os dados de um arquivo - FILE
    printf("%s\n",nome);
    printf("%s\n",nome1);
    
    fclose(arquivo);
    system("PAUSE");
    return 0;*/
}

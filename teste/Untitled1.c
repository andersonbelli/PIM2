#include <stdio.h>
int main(void){
    FILE *arquivo;
    arquivo = fopen("testete.txt","ra");
    
   char frase[100];
    while(fgets(frase,100,arquivo) != NULL){ 
    // fgets - file get string - parametros(nome da variavel, quantidade de caracteres, ponteiro do arquivo)
            printf("%s", frase);
    }
    
    fclose(arquivo);
    system("PAUSE");
//    return 0;
}

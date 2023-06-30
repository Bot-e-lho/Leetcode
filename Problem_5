#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * defangIPaddr(char * address);

int main(){
  char end_ant[] = "255.100.50.0";//"192.168.0.1";//Input: address = "1.1.1.1";//Input: address = 
  char* end_pos = defangIPaddr(end_ant);

  printf("\nNovo endereco: %s\n", end_pos);
  free(end_pos);

  return 0;
}

char * defangIPaddr(char * address){
    int tam = strlen(address);
    char* aux = (char*)malloc((tam * 3 + 1) * sizeof(char));
    int j = 0;
    char ponto = '.';
    for(int i = 0; i < tam; i++){
        if(address[i] == ponto){
           aux[j++] = '[';
           aux[j++] = '.';
           aux[j++] = ']';

        }else{
            aux[j++] = address[i];
        }
    }
    aux[j] = '\0';
    
    return aux;
    
}

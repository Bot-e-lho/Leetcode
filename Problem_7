#include <stdio.h>
#include <string.h>

int finalValueAfterOperations(char ** operations, int operationsSize);

int main()
{
	char* oper[] = {"X--", "++X", "X++"};
	int tam_oper = sizeof(oper)/sizeof(oper[0]);

	int aux = finalValueAfterOperations(oper, tam_oper);
	printf("\n\nResultado final: %d\n", aux);
	return (0);
}

int finalValueAfterOperations(char ** operations, int operationsSize){
    int X = 0;
    for(int i = 0; i < operationsSize; i++){
        if(strcmp(operations[i], "X++")== 0|| strcmp(operations[i], "++X")== 0){
        X++;
        }
            if(strcmp(operations[i], "--X")== 0 || strcmp(operations[i], "X--")== 0){
            X--;
            }
    }
    return X;
}

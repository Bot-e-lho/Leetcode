//Problema 682 -- Leetcode

int calPoints(char ** operations, int operationsSize){
int sum = 0;
int *vet = (int*)malloc(operationsSize * sizeof(int));
int c = 0;
    for ( int i = 0; i < operationsSize; i++){
        if ( isdigit( operations[i][0] ) || (operations[i][0] == '-' && isdigit(operations[i][1]))){
            vet[c] = atoi(operations[i]);
            c++;
        }
        if ( operations[i][0] == '+' ){
            if( c > 1 ){
                vet[c] = vet[c-1] + vet[c-2];
            }else if( c == 1 ){
                vet[c] = vet[c - 1];
            }
            c++;
        }
        if ( operations[i][0] == 'D' ){
            if( c > 0 ){
                vet[c] = vet[c-1] * 2;
            }
            c++;
        }
        if ( operations[i][0] == 'C' ){
            c--;
            
        }
    }
    for ( int i = 0; i < c; i++ ){
        sum = sum + vet[i];
    }
    free(vet);
    return sum;
}

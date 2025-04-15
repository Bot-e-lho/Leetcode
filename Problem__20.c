//Problema 1588 -- Leetcode

int sumOddLengthSubarrays(int* arr, int arrSize){
int soma = 0;

    if(arrSize < 3){
        for(int i = 0; i < arrSize; i++){
            soma += arr[i];

        }
        return soma;
    }

    for(int tam = 1; tam <= arrSize; tam += 2) { 
        for(int i = 0; i <= arrSize - tam; i++) { 
            for(int j = i; j < i + tam; j++) { 
                    soma += arr[j];
            } 
        } 
    }
    return soma;
}

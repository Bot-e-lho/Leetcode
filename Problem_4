/*Problema proposto em aula
Link do Problema: https://leetcode.com/problems/min-cost-climbing-stairs/
*/
#include <stdio.h>
#include <stdlib.h>


int minCostClimbingStairs(int* cost, int costSize);

int main()
{
	int n;
	printf("\nInforme o tamanho do vetor: ");
	scanf("%d", &n);
	int* array = (int*)malloc(n * sizeof(int));

	for(int i = 0; i < n; i++){
		printf("\nInforme o valor [%d]: ", i+1);
		scanf("%d", &array[i]);
	}
	printf("\n");
	int min = minCostClimbingStairs(array, n);

	printf("\nO custo minimo: %d\n", min);
	free(array);

	system("pause");
	return (0);
}

int minCostClimbingStairs(int* cost, int costSize){
 int aux[costSize];
    aux[0] = cost[0];
    aux[1] = cost[1];

    for (int i = 2; i < costSize; i++) {
        aux[i] = cost[i] + (aux[i-1] < aux[i-2] ? aux[i-1] : aux[i-2]);
    }

    return aux[costSize-1] < aux[costSize-2] ? aux[costSize-1] : aux[costSize-2];
}

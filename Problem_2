/*crie um novo array chamado "ans" com o dobro do comprimento do array original "nums". 
O novo array "ans" deve ser uma concatenação de duas cópias do array "nums"
se o array "nums" for [1, 2, 3], então o array resultante "ans" deve ser [1, 2, 3, 1, 2, 3].
*/
#include <stdio.h>
#include <stdlib.h>

int* getConcatenation(int* nums, int numsSize, int* returnSize);

int main()
{
	int n;
	printf("\nInforme o tamanho do array: ");
	scanf("%d", &n);
	int* nums = (int*)malloc(n * sizeof(int));
	printf("\n\n");
	for(int i = 0; i < n; i++){
		printf("\nInforme o valor[%d]: ", i+1);
		scanf("%d", &nums[i]);
	}
	int returnSize = 0;

	int* aux = getConcatenation(nums, n, &returnSize);
	
	printf("\nArray original:\n");
    for(int i = 0; i < n; i++){
        printf("%d\t", nums[i]);
    }
    printf("\n\nArray com dobro de tamanho:\n");
    for(int i = 0; i < returnSize; i++){
        printf("%d\t", aux[i]);
    }
	printf("\n\n");
	free(nums);
	free(aux);
	return (0);
}

int* getConcatenation(int* nums, int numsSize, int* returnSize){
	int aux = 2 * numsSize;
	int* ans = (int*)malloc(aux * sizeof(int));
	for(int i = 0; i < numsSize; i++){
		ans[i] = nums[i];
		ans[i+numsSize] = nums[i];
	}

	*returnSize = aux;
	return ans;
}

/* //Versão base
#include <stdio.h>
#include <stdlib.h>

int* getConcatenation(int* nums, int numsSize, int* returnSize);

int main()
{
	int n;
	printf("\nInforme o  tamanho do array: ");
	scanf("%d", &n);
	int* nums = (int*)malloc(n *sizeof(int));
	int* ans = (int*)malloc(2 * n * sizeof(int));
	printf("\n\n");
	for(int i = 0; i < n; i++){
		printf("\nInforme o valor[%d]: ", i+1);
		scanf("%d", &nums[i]);
	}

	for(int i = 0; i < n; i++){
		ans[i] = nums[i];
		ans[i+n] = nums[i];
	}

	printf("\nArray original:\n");
	for(int i = 0; i < n; i++){
		printf("%d\t", nums[i]);
	}
	printf("\n\nArray com dobro de tamanho:\n");
	for(int i = 0; i < 2*n; i++){
		printf("%d\t", ans[i]);
	}
	
	free(nums);
	free(ans);

	return (0);
}
*/

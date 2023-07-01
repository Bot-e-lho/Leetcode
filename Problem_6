#include <stdio.h>
#include <stdlib.h>


double* convertTemperature(double celsius, int* returnSize);

int main()
{
	double celsius;
	printf("\nInforme a temperatura em Celsius: ");
	scanf("%lf", &celsius);
	int size;
	double* graus = convertTemperature(celsius, &size);
	printf("\nTemperatura em Kelvin:  %.5lf", graus[0]);
	printf("\nTemperatura em Fahrenheit:  %.5lf\n", graus[1]);

	free(graus);
	return (0);
}

double* convertTemperature(double celsius, int* returnSize){
    double* ans = (double*)malloc(2 * sizeof(double));
    ans[0] = celsius + 273.15;
    ans[1] = (celsius * 1.80) + 32.00;
    *returnSize = 2;
    return ans;

}

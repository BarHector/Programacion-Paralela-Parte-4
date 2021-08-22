#include <stdio.h>
#include <omp.h>

double prodpunto(double *a, double *b, int n);

int main(){
	double a[7] = {1, 2, 3, 4, 5, 6, 7};
	double b[7] = {8, 9, 10, 11, 12 , 13, 14};

	prodpunto(a, b, 7);

	return 0;
}

double prodpunto (double *a, double *b, int n){
	double res=0;
	int i=0;

	printf("A\tB\n");

	for(int j=0; j<n; j++){
		printf("%.2f\t%.2f\n", a[j], b[j]);
	}

	printf("\n");

	#pragma omp parallel for reduction(+:res)
	for(i=0; i<n; i++){
		res += a[i]*b[i];
		printf("Sumando las multiplicaciones: %.2f\n", res);
	}

	printf("Resultado del producto punto: %.2f\n", res);

	return res;
}


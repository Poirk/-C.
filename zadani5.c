#include <stdio.h>
#include <stdlib.h>
#include "7olov.h"
/*Разместить в динамической памяти 2 массива – 2 матрицы размерностью n на n с элементами типа double
(значения n и элементы массивов ввести с консоли). А также ввести с консоли знак операции: '+', '-' или '*'. Написать функцию,
вычисляющую сумму, разность или произведение данных матриц (их передать по указателю)
и возвращающую указатель на массив-результат. Разместить эту функцию в отдельном модуле
(отличном от того, где располагается функция main()).
 Выдать на консоль значения полученного вектора.*/
int main(){
	int n;
	char oper;
	int i,j;

	printf("Bbedite n:");
	scanf("%d",&n);
	
	double** A=(double**)malloc(n * sizeof(double*));
	double** B=(double**)malloc(n * sizeof(double*));
	for (i=0;i<n;i++){
		A[i]=(double*)malloc(n*sizeof(double));
		B[i]=(double*)malloc(n*sizeof(double));
	}
	printf("matrix A:\n");
    for (i = 0; i < n; i++) 
        for (j = 0; j < n; j++) scanf("%lf", &A[i][j]);

    printf("matrix B:\n");
    for (i = 0; i < n; i++) 
        for (j = 0; j < n; j++) scanf("%lf", &B[i][j]);

    printf("Oper (+, -, *): ");
    scanf(" %c", &oper);
    double** Rez = martix(A, B, n, oper);

    printf("result:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) printf("%.2f ", Rez[i][j]);
        printf("\n");
    }

    return 0;
}








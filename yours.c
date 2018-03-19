#include <stdlib.h>
#include <sys/time.h>
#include <printf.h>
#include "handout.h"


//extern double *generate(int n);
//extern double *check(double *Yours, double *A, double *B, int n);

double *Yours(int n) {
    double *a;
    a = (double *) malloc(n * n * sizeof(double));
// fill your code here, change '0' to your output matrix
    return a;
}

int main(int argc, char *argv[]) {
    srand((unsigned int) time(NULL));
    int n = (int) argv[1];
    double *A, *B;
    A = generate(n);
    B = generate(n);
    printf("A\n");
    printMatrix(A, n);
    printf("B\n");
    printMatrix(B, n);
    double *Y;
    Y = (double *) malloc(n * n * sizeof(double));
    Y = generate(n);
//    Y = Yours(n);
//    Y = Mult(A, B, n);
    printf("Y\n");
    printMatrix(Y, n);
    if (check(Y, A, B, n))
        printf("TRUE%d\n", 1);
    else
        printf("FALSE%d\n", 0);
    free(A);
    free(B);
    free(Y);
}
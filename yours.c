#include <stdlib.h>
#include <sys/time.h>
#include <printf.h>
#include "handout.h"

//these are the implemented methods in 'handout.o' :

//double *generate(int n)
//bool check(double *Yours, double *A, double *B, int n)
//void printMatrix(double *M, int n)
//double *Mult(double *A, double *B, int n)

//the timer should be implemented in the YoursBlocked & YoursRecursive function and printed out in a format like "TIME: 0.000000 seconds"


double *YoursBlocked(int n) {
    double *a;
    a = (double *) malloc(n * n * sizeof(double));
// fill your code here, a is your output matrix
    return a;
}

double *YoursRecursive(int n) {
    double *a;
    a = (double *) malloc(n * n * sizeof(double));
// fill your code here, a is your output matrix
    return a;
}

int main(int argc, char *argv[]) {
    srand((unsigned int) time(NULL));
    int n = atoi(argv[1]);
    double *A, *B;
    A = generate(n);
    B = generate(n);
//    printf("A\n");
//    printMatrix(A, n);
//    printf("B\n");
//    printMatrix(B, n);
    double *Y;
    Y = (double *) malloc(n * n * sizeof(double));
    Y = generate(n);
    Y = YoursBlocked(n);
//    Y = Mult(A, B, n);
//    printf("Y\n");
//    printMatrix(Y, n);
    if (check(Y, A, B, n))
        printf("B TRUE%d\n", 1);
    else
        printf("B FALSE%d\n", 0);

    Y = YoursRecursive(n);
    if (check(Y, A, B, n))
        printf("R TRUE%d\n", 1);
    else
        printf("R FALSE%d\n", 0);
    free(A);
    free(B);
    free(Y);
}

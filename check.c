#include <stdio.h>
#include <stdbool.h>
#include <math.h>

//include the check function from this file to check your program, use '#include "check.c"'
//your output matrix should be presented as an 1-D array (not 2-D array)
double *Mult(double C[], double A[], double B[], int n) ;

bool check(double *Yours, double *C, double *A, double *B, int n) {
    double *Mine;
    Mine = Mult(C, A, B, n);
    for (int i = 0; i < n * n; i++)
        if (fabs(Mine[i] - Yours[i]) > 1e-6)
            return false;
    return true;
}

//your output matrix should be presented as an 1-D array (not 2-D array)
double *Mult(double C[], double A[], double B[], int n) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            for (int k = 0; k < n; k++)
                C[i * n + j] += A[i * n + k] * B[k * n + j];
    return C;
}
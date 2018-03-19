//
// Created by Yunfan Li on 2018/3/18.
//

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

double *generate(int n) {
    double *a ;
    srand((unsigned int) time(0));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            a[i * n + j] = rand() / (double) (RAND_MAX / 100);
            printf("%f", a[i * n + j]);
        }
    return a;
}
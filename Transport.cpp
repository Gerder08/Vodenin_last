#include "transport.h"
#include <fstream>
#include <iostream>
#include <math.h>
//#include <vector>

using namespace std;
/*
matrix::matrix()
{
    //ctor
}
*/
void transport::create_Post(int m, double *A){
    A = new double[m];
    for(int i = 0; i < m; i++){
        printf("A[ %d %s",i,"] = " );cin>>A[i];
    }
}

void transport::create_Potr(int n, double *B){
    B = new double[n];
    for(int i = 0; i < n; i++){
        printf("B[ %d %s",i,"] = " );cin>>B[i];
    }
}

void transport::create_trtabl(int n,int m,double **C){
    C = new double *[m];
    for(int i = 0; i < m; i++){
        C[i] = new double[n];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin>>C[i][j];
        }
    }
}

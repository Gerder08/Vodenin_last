#include "Transport.h"
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
void create_Post(int m, double *A){
    A = new double[m];
}

void create_Potr(int n, double *B){
    B = new double[n];
}

void create_trtabl(int n,int m,double **C){
    C = new double *[m];
    for(int i = 0; i < m; i++){
        C[i] = new double[n];
    }
}

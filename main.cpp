//#include "stdafx.h"
#include <stdio.h>
#include <tchar.h>
#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
#include <conio.h>

//#include "matrix.cpp"
//#include "vect.cpp"
//#include <vector>

using namespace std;

void create_Post(int m, double *A){
    A = new double[m];
    //for(int i = 0; i < m; i++){
    //
    //}
}

void create_Potr(int n, double *B){
    B = new double[n];
    //for(int i = 0; i < m; i++){
    //
    //}
}

int main()
{
	int choice,m, n,f1=0,f2=0, fl=0;
	double *A, *B;

	//double *A;
	//double *B;



    //cout<<"n= ";cin >> n;
    //create_matrix(n);
    //create_vect(n);


	while (1)
	{
		system("CLS");
		cout << "PRI-o-16 German Dergunov" << endl;
		cout << "Transportnya zadacha_metod potencialov" << endl;
		cout << "Vybirite punkt" << endl;
		cout
			<< "1. Postavschiki" << endl
			<< "2. Potrebiteli" << endl
			<< "3. Vyvod dannyh iz matr" << endl
			<< "4. Vyvod dannyh iz v" << endl
			<< "5. Factorizaciya matr " << endl
			<< "6. Detremenant matr" << endl
			<< "7. SLAE" << endl
			<< "8. Obr" << endl
			<< "9.Vyhod" << endl;

		//cin >> sw;
		switch(choice=getch()){

		case '1':{
		    cout<<"Postavschiki"<<endl;
		    cout<<"Kol-vo Postavschikov m = "; cin>> m;cout<<endl;
		    create_Post(m,A);
		    for(int i = 0; i < m; i++){
                    printf("A[ %d %s",i,"] = " );cin>>A[i];
            }
		    f1 = 1;
            getch();
            break;
		}
		case '2':{
		    cout<<"Potrebiteli"<<endl;
		    cout<<"Kol-vo Potrebiteley n = "; cin>> n;cout<<endl;
		    //matr.set_matrix();
            getch();
            f2 = 1;
            break;
		}/*
		case 3:
		{
		    cout<<"Vyvod matr"<<endl;
            matr.get_matrix();
            system("pause");
			break;
		}
		case 4:
		{
		    cout<<"Vyvod vector"<<endl;
		    matr.get_vect();
            system("pause");
			break;
		}
		case 5:
		{
			cout <<"Factoriz matr"<<endl;
			matr.get_factoriz();
			system("pause");
			break;

		}
		case 6:
		{
            cout <<"Detremenant matr"<<endl;
			matr.det();
			system("pause");
			break;
		}
		case 7:
		{
            cout<<"slae"<<endl;
            matr.get_slae();
            system("pause");

			break;

		}
		case 8:
		{
            cout<<"obr"<<endl;
            matr.get_obr();
            system("pause");
			break;

		}
		case 9:
		{
            cout<<"Obras"<<endl;
            matr.get_obras();
            system("pause");
			break;

		}*/
		case '9':{
			return 0;

		}
		}
	}
}

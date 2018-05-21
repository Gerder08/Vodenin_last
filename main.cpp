//#include "stdafx.h"
#include <stdio.h>
#include <tchar.h>
#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
#include <conio.h>

#include "transport.h"
//#include "vect.cpp"
//#include <vector>

using namespace std;

transport tran;
int main()
{
	int choice,m, n,f1=0,f2=0, fl=0;
    double *A;
    double *B;
    double **C;

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
			<< "3. Transportnaya tablica" << endl
			<< "9. Vyhod" << endl;

		//cin >> sw;
		switch(choice=getch()){

		case '1':{
		    cout<<"Postavschiki"<<endl;
		    cout<<"Kol-vo Postavschikov m = "; cin>> m;cout<<endl;
		    tran.create_Post(m,A);
		    f1 = 1;
            getch();
            break;
		}
		case '2':{
		    cout<<"Potrebiteli"<<endl;
		    cout<<"Kol-vo Potrebiteley n = "; cin>> n;cout<<endl;
		    tran.create_Potr(n,B);
            getch();
            f2 = 1;
            break;
		}
		case '3':{
		    if (f1==0||f2==0){
                cout<<"Vvedite Potrebiteley i Postaschikov p. 1, 2";
		    }
		    else{
		    cout<<"Transportnaya tablica"<<endl;
            tran.create_trtabl(n,m,C);
            fl=1;
		    }
		    system("pause");
			break;
		}/*
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

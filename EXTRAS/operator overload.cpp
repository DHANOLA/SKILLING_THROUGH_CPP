#include <iostream>


using namespace std;

const int MAXROW=2,MAXCOL=2;

struct matrix{

	int arr[MAXROW][MAXCOL];

};

matrix input();

void print(matrix obj);

void operator + (matrix a,matrix b);

void operator - (matrix a,matrix b);

void operator * (matrix a,matrix b);

int main(){

	matrix mat1,mat2;

	char ch;

	int num;


	do{

		cout<<"\n select anyone for two integer matrices (from 1 to 4): \n 1. Insert in the two matrices\n\n 2. addition of the matrices\n\n 3. subtraction of the two matrices\n\n 4. multiplication of the two matrices\n\n enter your chooice:  ";

		cin>>num;

		switch(num){

			case 1: cout<<"\n enter the elemts for the two matrix resp.:  \nmatrix 1: \n";

				mat1=input();

				cout<<"\n matrix 2: \n";

				mat2=input();

				break;

			case 2: cout<<"\n the matrix after addition: \n";

				mat1+mat2;

				break;

			case 3: cout<<"\n the matrix after subtraction: \n";

                                mat1-mat2;

                                break;

			case 4: cout<<"\n the matrix after subtraction: \n";

                                mat1*mat2;

                                break;

			default: cout<<"enter the valid value (1 to 4 only): \n\n";

		}

		cout<<"enter 'y' if want to try again or enter 'n' to exit: ";

		cin>>ch;

	}while(ch=='y' || ch=='Y');

	cout<<"\n\n thank you !!!\n\n";

	return 0;

}

matrix input(){

	matrix insert;

	for(int i=0;i<MAXROW;i++){

		for(int j=0;j<MAXCOL;j++){

			cin>>insert.arr[i][j];

		}

	}

	return insert;

}


void print(matrix display){

	for(int i=0;i<MAXROW;i++){

		for(int j=0;j<MAXCOL;j++){

			cout<<display.arr[i][j]<<"  ";

                }

		cout<<endl;

        }


}


void operator + (matrix mat1,matrix mat2){

	matrix sum;

        for(int i=0;i<MAXROW;i++){

                for(int j=0;j<MAXCOL;j++){

                        sum.arr[i][j]=mat1.arr[i][j]+mat2.arr[i][j];

                }

        }

	print(sum);

}


void operator - (matrix mat1,matrix mat2){

        matrix sub;

        for(int i=0;i<MAXROW;i++){

                for(int j=0;j<MAXCOL;j++){

                        sub.arr[i][j]=mat1.arr[i][j]-mat2.arr[i][j];

                }

        }

        print(sub);

}



void operator * (matrix mat1,matrix mat2){

        matrix mul;

        for(int i=0;i<MAXROW;i++){

                for(int j=0;j<MAXCOL;j++){

                        mul.arr[i][j]=0;

			for(int k=0;k<MAXCOL;k++){

				mul.arr[i][j]+=mat1.arr[i][k]*mat2.arr[k][j];

			}

                }

        }

        print(mul);

}


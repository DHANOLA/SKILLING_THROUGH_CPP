#include <iostream>


using namespace std;

void cls(int=500,int=500);


int main(){

	char row,col;

	cout<<"\n enter the number of rows and columns to clear: ";

	getche(row);

//	cls(row,col);

	return 0;

}


void cls(int row,int col){

	for(int i=0;i<row;i++){

		for(int j=0;j<col;j++){

			cout<<" ";

		}

	}

}

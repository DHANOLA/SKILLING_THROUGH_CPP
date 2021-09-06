#include <iostream>


using namespace std;

void f(int,int,int=10,int=20); //first non defau;t then default arg.


int main(){

	int b,d;

	cout<<"\n enter the value of 2nd and fourth arg: ";

	cin>>b>>d;

	cout<<"\n when the defaukt value used: \n";

	f(b,d);

	cout<<"\n when the default value overwrited: \n";

	f(b,d,25,77); //always first wirte non default value and then deafult value in function declaration see ^

	return 0;

}


void f(int b,int d,int a,int c){//always first wirte non default value and the deafult value 

	cout<<"a "<<a<<endl<<"b "<<b<<endl<<"c "<<c<<endl<<"d "<<d<<endl;


}

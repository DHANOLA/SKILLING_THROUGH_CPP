#include <iostream>


using namespace std;

char ascii(int);

char ascii(char[]);

int main(){

	int i;

	char integer,floating,f[25];

	cout<<"\n enter the integer and float resp.: ";

	cin>>i>>f;

	integer=ascii(i);

	floating=ascii(f);

	cout<<"ascii integer: "<<integer<<endl<<"ascii float: "<<floating<<endl;

	return 0;

}

char ascii(int num){

	return (char)num+48;

}


char ascii(char *num){

	return puts(num);

}

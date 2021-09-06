#include <iostream>


using namespace std;

class complex{

	private:

			int real,imag;

	public:

			complex(){

			}

			complex(int r,int i){

				real=r;

				imag=i;

			}

			void getdata(){

				cout<<"\nenter the real and imag part resp. : ";

				cin>>real>>imag;

			}

			void setdata(int r,int i){

				real=r;

				imag=i;

			}

			void displaydata(){

				cout<<"\nreal: "<<real<<"\nimag: "<<imag<<endl;

			}

			complex operator + (complex obj2){

				complex temp;

				temp.real=real+obj2.real;

				temp.imag=imag+obj2.imag;

				return temp;

			}

			complex operator * (complex obj2){

				complex temp;

				temp.real=real*obj2.real-imag*obj2.imag;

				temp.imag=real*obj2.imag+obj2.real*imag;

				return temp;

			}

};

int main(){

	complex c1,c2(1,1),c3,c4;

	c1.setdata(1,1);

	c3=c1+c2;

	c3.displaydata();

	c4.getdata();

	complex c5(1,1),c6;

	c6=c4*c5;

	c6.displaydata();

	complex c7;

	c7=c1+c2*c3;

	c7.displaydata();


	return 0;

}


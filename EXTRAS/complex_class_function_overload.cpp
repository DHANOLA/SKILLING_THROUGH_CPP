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

			void add_complex(complex obj1,complex obj2){

				complex temp;

				real=obj1.real+obj2.real;

				imag=obj1.imag+obj2.imag;

			}

			complex mul_complex(complex obj2){

				complex obj;

				obj.real=real*obj2.real-imag*obj2.imag;

				obj.imag=real*obj2.imag+obj2.real*imag;

				return obj;

			}

};

int main(){

	complex c1,c2(1,1),c3,c4;

	c1.setdata(1,1);

	c3.add_complex(c1,c2);

	c3.displaydata();

	c4.getdata();

	complex c5(1,1),c6;

	c6=c4.mul_complex(c5);

	c6.displaydata();

	complex c7;

	c7.add_complex(c1,c2.mul_complex(c3));

	c7.displaydata();


	return 0;

}


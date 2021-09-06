#include <iostream>


using namespace std;

class rectangle{

	private:

		int len,br,area,peri;	//private members

	public:

		rectangle(){	//public memmbers and the cionstructor

		}

		rectangle(int x){

			len=x;

			br=x;

		}

		void getdata(){

			cout<<"\nenter the length and breadth resp: ";

			cin>>len>>br;

		}

		void setdata(int l,int b){

			len=l;

			br=b;

		}

		void displaydata(){

			cout<<"\nlength: "<<len<<"\nbreadth: "<<br<<endl;

		}

		void area_peri(){

			area=len*br;

			peri=2*(len+br);

			cout<<"\narea: "<<area<<"\nperimetere: "<<peri<<endl;

		}

};	//class termninated

int main(){

	rectangle obj1,obj2,obj3(3);	//set len and br to 3 by calling constructor as obj3

	rectangle obj4=3;	//same as obj3 passed arg 3

	obj1.getdata();

	obj1.displaydata();

	obj1.area_peri();

        obj2.setdata(20,30);	//setting data by passing arg

        obj2.displaydata();

        obj2.area_peri();

        obj3.displaydata();

        obj3.area_peri();

        obj4.displaydata();

        obj4.area_peri();

	return 0;

}


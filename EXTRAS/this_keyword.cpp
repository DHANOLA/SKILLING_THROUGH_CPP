#include <iostream>


using namespace std;

class tis{

	private:

			int a;

	public:

			void setdata(){

				cout<<"\n in function setdata calling obj address using this keyword: "<<this<<endl;

				cin>>a;

				cout<<"\n a= "<<a<<endl;	//use -> with this oper. to access data members in class

			}

};

int main(){

	tis obj;

	cout<<"\n inside main obj adress without this: "<<&obj;

	obj.setdata();


	return 0;

}


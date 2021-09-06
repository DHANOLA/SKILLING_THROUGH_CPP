#include <iostream>


using namespace std;

class date{

	private:

		int day,month,year;

	public:

		date(){

			day=month=year=0;

		}

		date(int d,int m,int y){

			day=d;

			month=m;

			year=y;

		}

		void getdata(){

			cout<<"\nenter the date, month and year resp. : \n";

			cin>>day>>month>>year;

		}

		void displaydate(){

			cout<<"\ndate: "<<day<<"\nmonth: "<<month<<"\nyear: "<<year<<endl;

		}

		date& operator=(date& obj){

			cout<<"inside overloaded operator function...\n";

			day=obj.day;

			month=obj.month;

			year=obj.year;

			return *this;

		}

		date (date& obj){

			cout<<"\ninside the copy constructor....\n";

			day=obj.day;

			month=obj.month;

			year=obj.year;

		}

};

int main(){

	date obj1(25,9,2002),obj2,obj3;

	obj1.displaydate();

	obj2.getdata();

	obj2.displaydate();

	obj3=obj2;	//go to overloaded function = operator

	obj3.displaydate();

	date obj5=obj1;	//call to  copy constructor

	obj5.displaydate();

	return 0;

}


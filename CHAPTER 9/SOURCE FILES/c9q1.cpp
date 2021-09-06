#include <iostream>


using namespace std;

class strings{

	private:

			int len;

			char str[100];

	public:

			strings(){

				len=0;

				cout<<"enter the string: ";

				cin>>str;

			}

			strings operator + (strings obj){

				int len1;

				len=this->length();

				len1=obj.length();

				if(len<len+len1){

					cout<<"\n the string dont have enough space...";

				}

				else{

					int j=0;

					for(int i=len;i<len+len1;i++){

						str[i]=obj.str[j];

						j+=1;

					}

					return *this;

				}

			}

			strings operator = (strings obj){

				len=this->length();

				int len1=obj.length();

				if(len<len1){

					cout<<"\n there is les pace in string 1...";

				}

				else{

					for(int i=0;i<len1;i++){

						str[i]=obj.str[i];

					}

					return *this;

				}

			}

			strings operator += (strings obj){

				*this=*this+obj;

				return *this;

			}

			int length(){

				int len=0;

				while(str[len]!='\0'){

					len+=1;

				}

				return len;

			}

			void size(){

				cout<<"\n the size of string isa: "<<sizeof(str)<<endl;

			}

			void tolower(){

				int len=this->length();

				for(int i=0;i<len;i++){

					if(str[i]>=65 && str[i] <=90){

						str[i]+=32;

					}

				}

				cout<<"\n the lowercase string is: "<<str<<endl;

			}

                        void toupper(){

                                int len=this->length();

                                for(int i=0;i<len;i++){

                                        if(str[i]>=97 && str[i] <=122){

                                                str[i]-=32;

                                        }

                                }

                                cout<<"\n the uppercase string is: "<<str<<endl;

                        }

			void display(){

			cout<<str<<endl;

			}

};

int main(){

	int n;

	char ch='y';

	cout<<"\n enter the number of strings: ";

	cin>>n;

	strings obj[n];

	do{

		cout<<"\n enter your choice:\n1. oncatenate string using '+'.\n2. copy string using '='.\n3. add string using '+='.\n4. display length of the string.\n5. display size of string.\n 6. lower the sring characters.\n7. upper the string characters.\n enter the choice: ";

		cin>>n;

		int num;

		switch(n){

			case 1:	cout<<"enter the two string numbers resp. : ";

				cin>>n>>num;

				obj[n]+obj[num];

				cout<<"the string concatenation is: ";

				obj[n].display();

				break;

			case 2: cout<<"enter the two string numbers resp. : ";

                                cin>>n>>num;

				obj[n]=obj[num];

                                cout<<"the string after copy is: ";

				obj[n].display();

                                break;

			case 3: cout<<"enter the two string numbers resp. : ";

                                cin>>n>>num;

				obj[n]+=obj[num];

                                cout<<"the string concatenation is: ";

				obj[n].display();

                                break;

			case 4: cout<<"enter the string number: ";

                                cin>>n;

                                cout<<"the string length is: "<<obj[n].length()<<endl;

                                break;

			case 5: cout<<"enter the string number: ";

                                cin>>n;

                                obj[n].size();

                                break;

			case 6: cout<<"enter the string number: ";

                                cin>>n;

                                obj[n].tolower();

                                break;

			case 7: cout<<"enter the string: ";

                                cin>>n;

                                obj[n].toupper();

                                break;

			default: cout<<"\n enter the correct value: ";

		}

		cout<<"\n want to choice again (y/n): ";

		cin>>ch;

	}while(ch=='y' || ch=='Y');


	return 0;

}


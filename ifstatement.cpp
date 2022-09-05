#include<iostream>
using namespace std;
int main()
{
	cout<<"hello world\t\n";
	bool flaseint = 0;
	bool trueint = 1;
	if(flaseint && trueint){
		cout<<"This is a false or teue  value number\n";
	}
	else{
		cout<<"this is not false value number\n";
	}
	
	int age;
	cin>>age;
	if(age <= 10){
		for(int o=0; o<=age; o++){
			cout<<o<<" : 3"<<endl;
		}
	}	else if(age == 12 || age == 13 || age == 14 || age == 15){
		cout<<"you are "<<age<<" year old but not under the age  ten year old \n";
	}
	else if(age <= 16){
		cout<<"you 	are "<<age<<"year old but you are not sectel  \n";
	}
	else{
		cout<<"you are not correct value \n";
	}
	
	return 0;
}
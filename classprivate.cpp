#include<iostream>
using namespace std;
int main()
{
	int age1, age2, age3, age4, age5, age6, age7, age8, age9, age10;
	int agePlus;
	int studageaveg;
	cout<<"Enter student age 1: ";
	cin>>age1;
	cout<<"Enter student age 2: ";
	cin>>age2;
	cout<<"Enter student age 3: ";
	cin>>age3;
	cout<<"Enter student age 4: ";
	cin>>age4;
	cout<<"Enter student age 5: ";
	cin>>age5;
	cout<<"Enter student age 6: ";
	cin>>age6;
	cout<<"Enter student age 7: ";
	cin>>age7;
	cout<<"Enter student age 8: ";
	cin>>age8;
	cout<<"Enter student age 9: ";
	cin>>age9;
	cout<<"Enter student age 10: ";
	cin>>age10;
	agePlus = age1+age2+age3+age4+age5+age6+age7+age8+age9+age10;
	cout<<"Total student age: "<<agePlus<<endl;
	studageaveg = agePlus/10;
	cout<<"total Average of Student Age: "<<studageaveg<<endl;
	
	
	return 0;
}
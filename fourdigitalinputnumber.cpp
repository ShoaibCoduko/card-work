#include<iostream>
using namespace std;
int main(){
	int digt, number;
	cout<<"Enter A four number digi: "	;
	cin>>number;
	digt = number%10;
	cout<<"The digits are: ";
	cout<<digt<<",";
	number = number/10;
	digt = number%10;
	cout<<digt<<",";
	number = number/10;
	digt = number%10;
	cout<<digt<<",";
	number = number/10;
	digt = number%10;
	cout<<digt<<",";

	return 0;
}
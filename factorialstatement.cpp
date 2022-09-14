#include<iostream>
using namespace std;
int main()
{
	int factorial, number;
	cout<<"Please Enter The Number: ";
	cin>>number;
	while(number>1){
		factorial = factorial*number;
		number = number-1;
		cout<<"The factorial is "<<factorial;
	}
	return 0;
}
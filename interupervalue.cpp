#include<iostream>
using namespace std;
int main()
{
	int sum, number, uperlimt;
	sum = 0;
	number = 1;
	cout<<"Plz Enter the up value in this: ";
	cin>>uperlimt;
	while(number<=uperlimt){
		sum = sum+number;
		number = number+1;
	}
	cout<<"the sum of 1000 number in this statement: "<<sum;
	
	return 0;
}
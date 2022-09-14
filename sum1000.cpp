#include<iostream>
using namespace std;
int main()
{
	int sum, number;
	sum = 0;
	number = 1;
	while(number<=5){
		sum = sum+number;
		number = number+1;
	}
	cout<<"the sum of 1000 number in this statement: "<<sum;
	
	return 0;
}
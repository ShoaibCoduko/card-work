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
		if((number%2)==0)
		{
			sum = sum+number;
		}
	
		number = number+1;
	}
	cout<<"The sum of even number first: "<<uperlimt<< "intager staring form 1 is: "<<sum;
	
	return 0;
}
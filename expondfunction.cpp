#include<iostream>
using namespace std;
int power(int basenum, int ponum){
	int result = 1;
	for(int i = 0; i<ponum; i++)
	{
		result = result*ponum;
	}
	return result;
}
int main()
{
	cout<<"Exponent Function\n";
	cout<<power(1, 2);
	return 0;
}
#include<iostream>
#include<cmath>
using namespace std;
int getMax(int num1, int num2, int num3){
	int result;
	
	if(num1 >= num2){
		cout<<num1;
	}
	else{
		cout<<"not correct value\n";
	}
	return result;
}
int main()
{
	cout<<"More If Statement\n";
	cout<<getMax(97,7,4)<<endl;
	
	return 0;
}
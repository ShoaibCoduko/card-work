#include<iostream>
#include<cmath>
using namespace std;
double cube(double num1){
	return num1*num1*num1;
}
int intcube(int numint){
	return numint*numint*numint;
}
string strcbe(string stre){
	return stre;
}
int main()
{
	
	
	cout<<"Return Statement\n";
	cout<<cube(8.1)<<endl<<endl;
	
	cout<<intcube(3)<<endl;
	cout<<strcbe("Shoaib\n\n\n Ahmad\t\t\t\tali")<<endl;
	return 0;
}
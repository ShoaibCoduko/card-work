#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	cout<<"building a Mad Libs Game"<<endl;
	
	string color, pluralnon, celebrity;
	cout<<"Enter your Color: ";
	getline(cin, color);
	
	cout<<"Enter your plural noun: ";
	getline(cin, pluralnon);
	
	cout<<"Enter your celebrity: ";
	getline(cin, celebrity);
	cout<<"Roses are "<<color<<endl<<pluralnon<<" are blue"<<endl<<"i love "<<celebrity<<endl;
	
	return 0;
}
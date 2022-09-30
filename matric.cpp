#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	
int arr[20][20], a,b,i,j;
	cout<<"Enter the rows :";
	cin>>a;
	cout<<"Enter the Column :";
	cin>>b; 
	for(i=1; i<a; i++){
		for(j=1; j<b; j++){
			cout<<"Enter the element arr["<<i<<"]["<<j<<"[ :";
			cin>>arr[i][j];
			     
		}
	}
	
	cout<<i<<"\t"<<j<<"\n";
	
	
	return 0;
}
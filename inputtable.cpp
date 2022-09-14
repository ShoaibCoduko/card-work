// write a table in user in put display table
#include<iostream>
using namespace std;
int main(){
	int tablenum;
	int counter;
	cout<<"please Enter the table counter: ";
	cin>>tablenum;
	for(counter = 1; counter<=10; counter++){
		cout<<tablenum<<" x "<<counter<<" = "<<tablenum*counter<<endl;
	}
	
	return 0;
}
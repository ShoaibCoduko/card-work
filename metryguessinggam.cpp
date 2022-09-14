#include<iostream>
using namespace std;
int main(){
	char a;
	int tryNumber = 0;
	do{
	cout<<"Please Enter The Character a-z between guessing game: ";
	cin>>a;
	if(a=='d'){
		cout<<"congratulations, your win! game";
		tryNumber = 5;
	}
	else{
		tryNumber = tryNumber+1;
	}
}
	while(tryNumber<=6);
	return 0;
}
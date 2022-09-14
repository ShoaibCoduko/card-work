#include<iostream>
using namespace std;
int main(){
	int trynum = 0;
	char c;
	do{
		cout<<"Please Enter the Character Between a-z for gussing: ";
		cin>>c;
		if(c == 'z'){
			cout<<"Congratulations, your guess is correct";
			trynum = 6;
		}
		else{
			trynum = trynum+1;
		}
		
	}
	while(trynum<=5);
	
	return 0;
}
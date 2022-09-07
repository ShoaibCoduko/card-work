#include<iostream>
using namespace std;
int main(){
	int o = 0;
	do{
		cout<< o <<endl;
		o++;
		
	}
	while(o<20);
	for(int i = 0; i<o; i++)
	{
		cout<<&i<<endl;
		}	
	return 0;
}
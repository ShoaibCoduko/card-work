#include<iostream>
#include<cmath>
using namespace std;
void loopfor(){
	string student;
	for(int i=1; i<=10; i++){
		cout<<i<<": Enter student name ";
		getline(cin, student);
	}
}
int main()
{
	cout<<"we are using in c++ language\n\n";
	loopfor();
	
	
	return 0;
}
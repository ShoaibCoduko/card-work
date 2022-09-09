#include<iostream>
using namespace std;

class studentname{
	private:
		int rollno;
	public: 
	void outscreen();
	};
	void studentname::outscreen(){
		cout<<"Enter the student roll number: \n";
		cin>>rollno;
		cout<<rollno<<" :your roll number";
		
			}
int main()
{
	cout<<"we are using function out side define the class and object\n";
	studentname stu1;
	 stu1.outscreen();
	
	return 0;
}
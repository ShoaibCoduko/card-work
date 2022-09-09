#include<iostream>
using namespace std;
//we are define inside function in class
class stud{
	 private:
	 	int rollno = 10;
	 	public: 
	 	void display(){
	 		
	 	cout<<"the roll number: "<<rollno;
		 }
	
};

int main()
{
	stud st1;
	st1.display();
	
	
	return 0;
}
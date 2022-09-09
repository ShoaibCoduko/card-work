#include<iostream>
using namespace std;
class student{
 private:
 	int n =10;
 	public:
 		void show(){
 			cout<<"the value of n: "<<n<<endl;
		 }
};

int main (){
	student s1;
	s1.show();
	return 0; 
	
	
	

}
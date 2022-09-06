#include<iostream>
using namespace std;
int main(){
	 cout<<"\t\t\t Building a guessing Game\n";
	 
	 
	 int secretnumber = 8;
	 int gussnumber;
	 while( secretnumber != gussnumber)
	 {
	 	cout<<"Enter guss number: ";
	 	cin>>gussnumber;
	 }
	 cout<<"You are win! \t\t Game";


	cout<< "play a second game now\n";
	 
	 int ecretnumber = 8;
	 int ussnumber;
	 int gusscount = 0;
	 int gusslimt = 6;
	 bool outofguss = false;
	 while(ecretnumber != ussnumber && !outofguss)
	 {
	 	if(gusscount < gusslimt){
	 		cout<<"Enter guss number: ";
	 		cin>>ussnumber;
	 		gusscount++;
		 } else{
		 	outofguss = true;
		 }
	 	
	 }
	 if(outofguss){
	 	cout<<"you lose!";
	 }
	 else{
	 	cout<<"You are win! \t\t Game";
	 }

	return 0;
	}
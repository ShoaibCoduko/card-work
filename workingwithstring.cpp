#include <iostream>
using namespace std;
int main(){
	string phasse = "Shoaib Ahmad";
	phasse[5]='Z';
	cout<<phasse<<endl;
	string phae = "Zafer Akrem working now";
	cout<<phae.find("noe", 1)<<endl;
//	substring started
	string wphae = "wenow new working example";
	cout<<wphae.substr(10, 2)<<endl;


	return 0;
}
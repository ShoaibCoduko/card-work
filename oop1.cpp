#include<iostream>
#include<list>
using namespace std;
class youtubr{
	public:
	string name;
	string ownerName;
	int subscribersCount;
	list<string> publicshedvideo;
};
int main(){
	
	youtubr youtubr1;
	youtubr1.name = "Video link ";
	youtubr1.ownerName = "Shoaib Ahmad";
	youtubr1.subscribersCount=923;
	youtubr1.publicshedvideo={ "css full cusec", "c++ progremming", "css full cusec",  "Html Video", "css full cusec", "css full cusec",  "javascript full"};
	cout<<"Chanal Name: "<<youtubr1.name<<endl;
	cout<<"Owner Name Chanal: "<<youtubr1.ownerName<<endl;
	cout<<"Subcriber Chanal User: "<<youtubr1.subscribersCount<<endl;
	cout<<"See Video: \n";
	for(string chanal:youtubr1.publicshedvideo){
		cout<<chanal<<endl;
	}
	
	
	
	
	
	return 0;
}
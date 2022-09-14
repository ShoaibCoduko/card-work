#include<iostream>
using namespace std;
int main(){
	double amount, discount, netPayanle;
	amount = 0;
	discount = 0;
	netPayanle = 0;
	cout<<"plz Enter the Bill amount: ";
	cin>>amount;
	if(amount>5000){
		discount = amount*(15.0/100);
		netPayanle = amount-discount;
		cout<<"The discount at 15% is Rupees "<<discount<<endl;
		cout<<"The pay amount is Rupees: "<<netPayanle;		
	}
	else{
			discount = amount*(10.0/100);
		netPayanle = amount-discount;
		cout<<"The discount at 10% is Rupees "<<discount<<endl;
		cout<<"The pay amount is Rupees: "<<netPayanle;	
		
	}
	

	return 0;
}
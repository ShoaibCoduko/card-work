// this program displays the sum of squares of integers from 1 to n
#include<iostream>
using namespace std;
int main(){
	int i, n, sum;
	sum = 0;
	cout<<"please Enter positive numberfor sum of squares: ";
	cin>>n;
	for(i=1; i<=n; i++){
		sum+=i*i;
		
	}
	cout<<"The sum of the first "<<n<<" sqares is "<<sum<<endl;
}
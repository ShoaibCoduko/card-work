#include<iostream>
using namespace std;
 string getdayofweek( int daynum){
		string dayname;
		switch(daynum){
			case 1:
			dayname = "sunday";
				break;
			case 2:
				dayname = "Monday";
				break;
			case 3:
			dayname = "Tuesday";
				break;
			case 4:
			    dayname = "Wedne";
				break;
			case 5:
				dayname = "thureday";
				break;
			case 6:
				dayname = "Friday";
				break;
			case 7:
					dayname = "Saturday";
				break;
			default:
					dayname = "error";
				
		}
		return dayname;
	}

int main()
{
	cout<<"\t\t Switch Statement file first:\t\n";
	
	
	cout<<getdayofweek(4);
	
	return 0;
}
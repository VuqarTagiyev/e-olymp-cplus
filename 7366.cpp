#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	long long n,seconds,minute,day,hours;
	cin>>n;
	seconds = n%60;
	minute = (n%3600)/60;
	day = n/86400;
	hours = (n%86400)/3600;	
	
	cout<<day<<" "<<hours<<" "<<minute<<" "<<seconds;
	return 0;
}

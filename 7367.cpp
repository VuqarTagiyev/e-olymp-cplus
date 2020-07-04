#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int n,day=0;
	cin>>n;
	int m=0;
	while(n>m){
		m+=10;
		m += (m * 10)/100;
		cout<<m<<" ";
		day++;
	}
	cout<<day;
	
	
	
	return 0;
}

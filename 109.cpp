#include<iostream>
using namespace std;
int main(){
	int n,change;
	cin>>n;
	if(n<11){
		cout<<n;
	}
	else if(10<n&&n<100){
		n-=10;
		n/=2;
		cout<<n+10;
	}
	else if(100<n&&n<1000){
		n-=99;
		n/=3;
		cout<<n+54;
		
	}
	else {
		n-=999;
		n/=4;
		cout<<n+353;
	}
	
	
	
}

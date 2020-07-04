#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a,b,c,d;
	a=n/1000;
	b=(n%1000)/100;
	c=(n%100)/10;
	d=n%10;
	if(a==b&&b==c){
		cout<<"YES";
	}
	else if(a==b&&b==d){
		cout<<"YES";
	}
	else if(d==b&&b==c){
		cout<<"YES";

	}
	else if(a==d&&d==c){
		cout<<"YES";
	}	
	else{
		cout<<"NO";
	}
	return 0;
}

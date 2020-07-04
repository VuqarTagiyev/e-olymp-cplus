#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a,b,d,neww;
	a=n/100;
	b=(n%100)/10;
	d=n%10;
	if(a>b&&a>d){
		if(b>d){
			neww=(a*100)+(b*10)+d;
		}
		else neww=(a*100)+(d*10)+b;
	}
	else if(a<b&&b>d){
		if(a>d){
			neww=(b*100)+(a*10)+d;
		}
		else neww=(b*100)+(d*10)+a;
	}
	else{
		if(a>b) neww=(d*100)+(a*10)+b;
		else neww=(d*100)+(b*10)+a;
	}
	cout<<neww*neww;
	return 0;
}

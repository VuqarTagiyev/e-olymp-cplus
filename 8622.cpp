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
	if(n%a==0&&n%b==0&&n%c==0&&n%d==0){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	
	return 0;
}

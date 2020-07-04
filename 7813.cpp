#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	double a,b,c;
	double i,r,d,k;
	cin>>a>>b>>c;
	i=(a+b+c)/2;
	k=i-a;
	d=i-c;
	r=i-b;
	cout<<fixed<<setprecision(2)<<r<<" "<<fixed<<setprecision(2)<<d<<" "<<fixed<<setprecision(2)<<k;
	
	
}	

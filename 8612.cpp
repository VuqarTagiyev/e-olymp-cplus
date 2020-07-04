#include<iostream>
#include<iomanip>
using namespace std;
int f(int x){
	int cem=0;
	if(x>=0){
		cem+=((x*x*x)+(2*x*x)+(x*4)-6);
	}
	else cem+=x*x*x-7*x;
	return cem;
}
int main(){
	int k;
	cin>>k;
	cout<<f(k);
	
	
	return 0;
}

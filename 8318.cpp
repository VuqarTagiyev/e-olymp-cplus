#include<iostream>
using namespace std;
int main(){
	long long n;
	cin>>n;
	long long neww=0,p=1;
	while(n!=0){
		if(n%10!=9&&n%10!=3){
			neww+=(n%10)*p;
			p*=10;
		}
		
		n/=10;
	}
	cout<<neww;
	
	
	
	
	
}

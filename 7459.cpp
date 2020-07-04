#include<iostream>
using namespace std;
int main(){
	int n,h=1;
	cin>>n;
	while(n!=0){
		if((n%10)%2==1){
			h*=n%10;
		}
		
		n/=10;
	}
	cout<<h;
		
}

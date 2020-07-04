#include<iostream>
using namespace std;
int main(){
	long long n,number=0;
	cin>>n;
	while(n!=0){
		
		
		number=n%10;
		n/=10;
	}
	if(number<0)
	cout<<number*-1;
	else cout<<number;
}

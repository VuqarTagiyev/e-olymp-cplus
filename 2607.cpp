#include<iostream>
using namespace std;
int main(){
	long long n;
	cin>>n;
	long long sum=1;
	while(n!=0){
		sum*=n%10;
		n/=10;
		
	}
	cout<<sum;
}

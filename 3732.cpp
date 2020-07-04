#include<iostream>
using namespace std;
int main(){
	long long n,n1=1,sum=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		n1*=i;
		sum+=n1;
	}
	cout<<sum;
	
	
}

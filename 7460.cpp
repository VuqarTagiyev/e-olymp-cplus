#include<iostream>
using namespace std;
int main(){
	int n,m,k;
	cin>>n>>m>>k;
	int sum=0;
	if(n%k==0){
		sum+=n/k;
	}
	else{
		sum+=(n/k)+1;
	}
	if(m%k==0){
		sum+=m/k;
	}
	else sum+=(m/k)+1;
	cout<<sum;
}

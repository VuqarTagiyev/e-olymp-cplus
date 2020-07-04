#include<iostream>
using namespace std;
int main(){
	long long n,f=1,m;
	cin>>n>>m;

	for(int i=1;i<=n;i++) f*=i%m;
	cout<<f;
		
}

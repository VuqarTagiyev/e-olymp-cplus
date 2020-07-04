#include<iostream>
#include<cmath>
using namespace std;
int main(){
	long long n,m;
	cin>>n>>m;
	for(int i=n;i<=m;i++){
		cout<<(long long)pow(i,2)<<" ";
	}
	cout<<endl;
		for(;m>=n;m--){
		cout<<(unsigned long long)pow(m,3)<<" ";
	}
}

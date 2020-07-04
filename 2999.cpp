#include<iostream>
using namespace std;
int f(int n,int m){
	if(m==0){
		return 1;
	}
	if(m==n){
		return 1;
	}
	if(0<m&&m<n) return f(m-1,n-1)+f(m,n-1);
}
int main(){
	int n,m;
	cin>>n>>m;
	cout<<f(n,m);
	return 0;
}

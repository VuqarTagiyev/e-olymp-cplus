#include<iostream>
using namespace std;
int main(){
	long long n,a,b;
	cin>>n;
	int c[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>c[i][j];
		}
	}
	cin>>a>>b;
		for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
}

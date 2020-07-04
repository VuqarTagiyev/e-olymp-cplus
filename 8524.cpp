#include<iostream>
using namespace std;
int main(){
	long long n,positive=0;
	cin>>n;
	int c[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>c[i][j];
			if(c[i][j]>0) positive+=c[i][j];
		}
	}
	cout<<positive;
}

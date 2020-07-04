#include<iostream>
#include<vector>
using namespace std;
int main(){
	long long n,v,k;
	vector <int> neww;
	cin>>n;
	long long m=n; 
	while(m!=0){
		k = m%10;
		for(int i=0;i<=k;i++){
			neww.push_back(k);
		}
		m/=10;
	}
	for(int i=neww.size()-1;i>=0;i--){
		cout<<neww[i];
	}
	
}

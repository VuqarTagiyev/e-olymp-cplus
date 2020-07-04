#include<iostream>
using namespace std;
int main(){
	int n,change;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=n;i>1;i--){
		for(int j=0;j<i;j++){
			if(a[j-1]>a[j]){
				change = a[j];
				a[j]=a[j-1];
				a[j-1]=change;
			}
		}
	}
	for(int i=n-1;i>=0;i--){
		cout<<a[i]<<" ";
	}
	
}

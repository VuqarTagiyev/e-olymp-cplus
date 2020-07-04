#include<iostream>
using namespace std;
int main(){
	int n,change;
	cin>>n;
	n--;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	
	for(int i=n;i>1;i--){
		for(int j=1;j<i;j++){
			if(a[j]<a[j-1]){
				change  = a[j];
				a[j] =a[j-1];
				a[j-1]= change ;
			}
		}
	}
	for(int i=0;i<n;i++){
		if(a[i]+1!=a[i+1]){
			cout<<a[i]+1;
			break;
		}
	}
	/*1 2 4 5*/
	
}

#include<iostream>

using namespace std;
int main(){
	int n,i;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	
	}
		for(i=0;i<n;i++){
			if(a[i+1]>a[i]){
			cout<<a[i+1]<<" ";
		}
	}
		
	
	return 0;
}

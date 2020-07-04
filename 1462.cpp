#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n; 
	int a[n],c;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=n;i>1;i--){
		for(int j=1;j<i;j++){
			if(a[j]<a[j-1]){
				c=a[j-1];
				a[j-1]=a[j];
				a[j]=c;
			}
		}
	}
		for(int i=n;i>1;i--){
		for(int j=1;j<i;j++){
			if((a[j]%10)<(a[j-1]%10)){
				c=a[j-1];
				a[j-1]=a[j];
				a[j]=c;
			}
		}
	}
		for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
	return 0;
}

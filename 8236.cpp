#include<iostream>
using namespace std;
int main(){
	int  n;
	cin>>n;
	int k=0,j=0,arr[n],change,alone=0 , two=0;
	for(int i=0;i<n;i++) cin>>arr[i];
	for(int i=0;i<n;i++){
		if(arr[i]%2==1) alone++;
		else two++;
	}
	int t[alone],c[two];
	for(int i=0;i<n;i++){
		if(arr[i]%2==1&&j<alone){
		 t[j]=arr[i];
		 j++;
		 }
		else if(arr[i]%2==0&&k<two){
	c[k]=arr[i];
	k++;
	}
	} 
	
	for(int i=alone;i>1;i--){
		for(int j=1;j<i;j++){
			if(t[j-1]>t[j]) {
				change=t[j-1];
				t[j-1]=t[j];
				t[j]=change;
			}
		}
	}
		for(int i=two;i>1;i--){
		for(int j=1;j<i;j++){
			if(c[j-1]>c[j]) {
				change=c[j-1];
				c[j-1]=c[j];
				c[j]=change;
			}
		}
	}
	
	for(int i=0;i<alone;i++){
		cout<<t[i]<<" ";
	}
	
	for(int i=two-1;i>=0;i--){
		cout<<c[i]<<" ";
	}
	
		
}

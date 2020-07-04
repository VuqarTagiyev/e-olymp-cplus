#include<iostream>
using namespace std;
int main(){
	int change;
	int a[4];
	int n=4;
	for(int i=0;i<4;i++) cin>>a[i];
	
	 	for(int i=n;i>1;i--){
		for(int j=1;j<i;j++){
			if(a[j]<a[j-1]){
				change  = a[j];
				a[j] =a[j-1];
				a[j-1]= change ;
			}
		}
	}
	cout<<a[3];	
}	

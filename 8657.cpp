#include<iostream>
using namespace std;
int main(){
	int a[4],d;
	for(int i=0;i<4;i++){
		cin>>a[i];
}
	for(int j=4;j>1;j--){
		for(int i=1;i<j;i++){
			if(a[i-1]>a[i]){
				d=a[i-1];
				a[i-1]=a[i];
				a[i]=d;
			}
		}
	}
	cout<<a[2]-a[1];
	
	
	return 0;
}

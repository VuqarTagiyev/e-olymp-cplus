#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int a[5];
	for(int i=0;i<5;i++){
		cin>>a[i];
	}
	cout<<a[0]<<" ";
	for(int i=1;i<4;i++){
		cout<<a[i-1]+a[i+1]<<" ";
	}
	cout<<a[4];
	return 0;
}

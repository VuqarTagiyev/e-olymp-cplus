#include<iostream>
using namespace std;
int main(){
	long long n,max=0,cem=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	for(int i=0;i<n;i++)
{
	if(arr[i]>max){
		max=arr[i];
	}
	}	
	for(int i=0;i<n;i++){
		if(max!=arr[i]) cem+=arr[i];
	}
	cout<<cem;
	
	
	
	return 0;
}

#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector <long long> arr;
	int a;
	for(int i=0;i<n;i++){
		cin>>a;
		arr.push_back(a);
	}
	sort(arr.begin(),arr.end());
	for(int i=0;i<n;i++)
	{
	if(i%2==0)
	cout<<arr[i]<<" ";
	}
	for(int i= n-1;i>0;i--){
	if(i%2==1){
		cout<<arr[i]<<" ";
	}
	}
	
	return 0;
}

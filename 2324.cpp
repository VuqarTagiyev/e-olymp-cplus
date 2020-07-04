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
	cout<<arr[i]<<" ";
	
	
	return 0;
}

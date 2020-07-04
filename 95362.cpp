#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	vector <int> arr;
	cin>>n;
	for(int i=0;i<n;i++){
		int m;
		cin>>m;
		arr.push_back(m);
	}
	sort(arr.begin(),arr.end());
	
	if(n==1) cout<<"Ooops!";
	else if(arr[0] == arr[n-1]) cout<<"Ooops!";
	else cout<<arr[0]<<" "<<arr[n-1];
}

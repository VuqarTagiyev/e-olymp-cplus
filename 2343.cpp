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
	int check = 0;
	for(int i=0;i<n;i++){
		for(int j=i;j<n-1;j++){
			if(arr[i] == arr[j+1]){
				check = 1;
			}
		}
	}
	if(check == 0 ){
		cout<<"YES";
	}
	else cout<<"NO";
	
	return 0;
}

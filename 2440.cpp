#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m=11,a;
	cin>>n;
	vector <int> num;
	for(int i=0;i<n;i++){
		vector <int> arr;
		for(int j = 0;j<m;j++)
		{
			cin>>a;
			arr.push_back(a);
			
		}
		sort(arr.begin(),arr.end());
		num.push_back(arr[8]);
	}
	
	for(int i=0;i<n;i++){
		cout<<i+1<<" "<<num[i]<<endl;
	}
	
	
	
	return 0;
}

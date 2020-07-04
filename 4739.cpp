#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;
int main(){
	long long a,b,check=0;
	vector <int> arr;
	cin>>a>>b;
	for(int i=a;i<=b;i++){
		check =0;
		if(i%2==0&& i!= 2) continue;
		for(int j=2;j<i;j++){
			if(i%j==0){
				check = 1;
			}
		}
		if(check == 1) continue;
		if(i != 1)
		arr.push_back(i);
	}
	for(int i=0;i<arr.size();i++){
		cout<<arr[i]<<" ";
	}
	
	
	
}

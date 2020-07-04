#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;
int main(){
	int n;
	cin>>n;
	vector <int> vct;
	int a;
	for(int i=0;i<n;i++){
		cin>>a;
		vct.push_back(a);
	}
	sort(vct.begin(),vct.end());
	for(int i=n-1;i>=0;i--){
		cout<<vct[i]<<" ";
	}
	
	
}

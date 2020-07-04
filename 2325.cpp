#include<iostream>
#include<vector>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main(){
	long long a,b,size=0,change,neww=0;
	cin>>a>>b;
	change = a;
	while(change!=0){
		size++;
		change/=10;
	}
	change=1;
	for(int i=0;i<size;i++){
		change*=10;
	}
	long long number = b*change+a;
	vector <int> vct;
	while(number!=0){
		vct.push_back(number%10);
		number/=10;
	}
	sort(vct.begin(),vct.end());
	
			for(int i=vct.size()-1;i>-1;i--){
				neww += vct[i];
				neww*=10;
			}
			neww/=10;
	cout<<neww;
	
}

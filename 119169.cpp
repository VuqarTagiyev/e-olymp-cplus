#include<bits/stdc++.h>
#include<vector>
#include<iostream>
using namespace std;
int main(){
	int n,num=1;
	cin>>n;
	int arr[n];
	vector <int>vct;
	
	for(int i=0;i<n;i++)cin>>arr[i];
	for(int i=0;i<n-1;i++){
		num=1;
		for(int j=i;j<n-1;j++){
			if(arr[j] <=arr[j+1]){
				num++;
			}
			else {
				vct.push_back(num);
				break;
			}
		}
	}
	sort(vct.begin(),vct.end());
	cout<<vct.back();	

	
	
	return 0;
}

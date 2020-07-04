#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,size,dif;
	cin>>n;
	vector <int> max,min,diff;
	for(int i=0;i<n;i++){
		int maks=0,minm=32645;
		dif=0;
		cin>>size;
		vector <int> vct(size);
		for(int j=0;j<size;j++) cin>>vct[j];
		sort(vct.begin(), vct.end());
		for(int j=0;j<size;j++){
			if(maks < vct[j])	maks = vct[j];
			if(minm > vct[j]) minm = vct[j];
		}
		for(int j=1;j<size;j++){
			if(vct[j]-vct[j-1]>dif){
				dif = vct[j]-vct[j-1];
			}
		}
		diff.push_back(dif);
		max.push_back(maks);
		min.push_back(minm);
	}
	for(int i=0;i<n;i++){
		cout<<"Class "<<i+1<<endl<<"Max "<<max[i]<<","
		<<" Min "<<min[i]<<","
		<<" Largest gap "
		<<diff[i]<<endl;
	}
}

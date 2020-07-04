#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
int main(){
	vector <string> name;
	string namei;
	int num=1;
	while(cin>>namei){
		name.push_back(namei);
	}
	cout<<endl;
	sort(name.begin(), name.end()); 
	cout<<endl;
	for(int i=0;i<name.size()-1;i++){
		if(name[i]==name[i+1]){
			num++;
		}
		else {
			cout<<name[i]<<" "<<num<<endl;
			num=1;
		}
	}
	cout<<name.back()<<" "<<num;
}

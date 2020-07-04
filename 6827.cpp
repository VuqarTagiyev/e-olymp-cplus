#include<iostream>
#include<vector>
using namespace std;
int main(){
	string n,m;
	
	int i=0,j=0;
	cin>>n>>m;
	while(n[i]!='\0'){
		i++;
	}
	while(m[j]!='\0'){
		j++;
	}
	if(i<j){
		cout<<"no";
	}
	else cout<<"go";
	
}

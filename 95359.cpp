#include<iostream>
using namespace std;
int main(){
	string n;
	int num = 0;
	cin>>n;
	for(int i=0;i<n.length();i++){
		if(n[i] == '5') num++;
		
	}
	cout<<num;
}

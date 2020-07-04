#include<iostream>
using namespace std;
int main(){
	string a,n;
	int num = 0;
	cin>>n>>a;
	for(int i=0;i<n.length();i++){
		if(n[i] == a[0]) num++;
		
	}
	cout<<num;
}

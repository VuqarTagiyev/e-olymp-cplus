#include<iostream>
using namespace std;
int main(){
	int a,b,say=0;
	cin>>a>>b;
	int c=111;
	for(;a<b;a++){
		if(a%2==1&&say!=5&&a%1000==c){
			cout<<a<<" ";
			say++;
			c+=2;
		}
		
	}
	
	
	
	return 0;
}

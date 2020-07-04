#include<iostream>
using namespace std;
int main(){
	double l,num = 0,k;
	cin>>l>>k;
	if(l == 1){
		num = 1;
	}
	while(l>1){
		l/=k;
		num++;
	}
	cout<<num-1;
	
	
	
	
	
	return 0;
}

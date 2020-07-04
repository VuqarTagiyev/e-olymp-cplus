#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a,b,num1=0,num2=0;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		if(a>b){
			num1++;
		}
		else if(b>a){
			num2++;
			
		}
		else{
			num1++;
			num2++;
		}
	}
	if(num1>num2){
		cout<<1;
	}
	else if(num1<num2){
		cout<<2;
	}
	else cout<<0;
	
	
	
	return 0;
}

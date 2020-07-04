#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a,b,arm=0,two=0;
	cin>>a>>b;
	
	for(;a<b;a++){
	two+=pow((a/1000),4);
	two+=pow((a/100)%10,4);
	two+=pow((a/10)%10,4);
	two+=pow(a%10,4);
	if(two==a){
			cout<<a<<" ";
	}
		
	two=0;	
	}

	
	
	return 0;
}

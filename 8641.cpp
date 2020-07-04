#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a,b,arm=0,two=0;
	cin>>a>>b;
	
	for(;a<b;a++){
	two+=pow((a/100),3);
	two+=pow((a/10)%10,3);
	two+=pow(a%10,3);
	if(two==a){
			cout<<a<<" ";
	}
		
	two=0;	
	}

	
	
	return 0;
}

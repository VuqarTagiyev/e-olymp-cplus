#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int x;
	cin>>x;
	unsigned int cem=0;
	signed int cem1=0;
	if(x>0){
	
	if(x>=13){
		cem+=((3*x*x*x)+(4*x*x)+(x*5)+6);
	}
	else cem+=((3*x*x*x)-(2*x*x)-(x*3)-4);
	cout<<cem;}
	else {
			
	if(x>=13){
		cem1+=((3*x*x*x)+(4*x*x)+(x*5)+6);
	}
	else cem1+=((3*x*x*x)-(2*x*x)-(x*3)-4);
	cout<<cem1;
	}
	
	
	return 0;
}

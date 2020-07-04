#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	string out="YES";
	int n,a=9;
	cin>>n;
	while(n!=0){
		if(n%10>a){
			out="NO";
		}
		
		
		a=n%10;
		n/=10;	
	}
	cout<<out;
	
	return 0;
}

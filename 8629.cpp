#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	long long num=0,n;
	string a="NO"
	cin>>n;
	while(n!=0){
		if(n%2==1){
			a="YES";
		}
		n/=10;
		
	}
	cout<<a;
	
	return 0;
}

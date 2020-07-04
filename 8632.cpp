#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	long long num=0,n;
	cin>>n;
	while(n!=0){
		if(n%2==1){
			num++;
		}
		n/=10;
		
	}
	cout<<num;
	
	return 0;
}

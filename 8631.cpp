#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	long long max=0,num=0,n;
	cin>>n;
	long long m=n;
	while(n!=0){
		if(n%10>max){
			max=n%10;
		}
		n/=10;
		
	}
	while(m!=0){
		if(m%10==max){
			num++;
		}
		m/=10;
		
	}
	cout<<num;
	
	return 0;
}

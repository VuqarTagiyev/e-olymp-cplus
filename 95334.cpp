#include<iostream>
using namespace std;
int main(){
	long long n,num = 0;
	cin>>n;
	while(n!=1){
		if(n%2==1){
			n+=1;
			num++;
		}
		else {
			n/=2;
			num++;
		}
		
		
	}
	cout<<num;
	
	
}

#include<iostream>
#include<math.h>
using namespace std;
int main(){
	long long n,num=1;
	cin>>n;
	while(n!=0){
		
		if(n%10!=0){
			num*=n%10;
		}
		n/=10;
	}
	cout<<num<<endl;
	return 0;
}

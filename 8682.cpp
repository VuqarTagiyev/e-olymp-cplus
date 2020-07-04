#include<iostream>
#include<math.h>
using namespace std;
int main(){
	long long n,neww=0;
	cin >> n ;
	int v=1;
	while(n!=0){
		if((n%10)%2==1){
			neww+=(n%10)*v;
			v*=10;
			
		}
		n/=10;
		
	}
	cout<<neww;
	
	
	
	return 0;
}

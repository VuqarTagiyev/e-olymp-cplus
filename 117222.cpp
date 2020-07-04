#include<iostream>
#include<math.h>
using namespace std;
int main(){	
	int t = 0,n,max;
	cin>>n;
	for(int i=0;i<32;i++){
		int m = pow(2,i);
		if(n%m == 0) max = pow(2,i);
		if(m>n){
			break;
		}
	}
	cout<<max;
	
	
	
}

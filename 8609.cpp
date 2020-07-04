#include<iostream>
#include<math.h>
using namespace std;
long long f(long long n){
	long long cem=0;
	for(long long i=0;i<n;i++){
		cem+=((i-1)+i);
	}
	return cem;
}
int main(){

	long long n;
	cin>>n;
	cout<<f(n);
	
	return 0;
}

#include<iostream>
#include<math.h>
using namespace std;
long long f(long long a){
	long long b=1+a+a*a;
	return b;
}
int main(){

	long long n;
	cin>>n;
	cout<<f(n);
	
	return 0;
}

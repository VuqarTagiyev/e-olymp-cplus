#include<iostream>
#include<math.h>
using namespace std;
long long f(long long x,long long y,long long z){
	long long b=x*y*z+x+y*y+z*z*z;
	return b;
}
int main(){

	long long x,y,z;
	cin>>x>>y>>z;
	cout<<f(x,y,z);
	
	return 0;
}

#include<iostream>
#include<cmath>
using namespace std;
int main(){
	long long n,p;
	
	cin>>n>>p;
	long long i,j;
	i = pow(n,n);
	j = pow(10,p);
	cout<<i%j;
}

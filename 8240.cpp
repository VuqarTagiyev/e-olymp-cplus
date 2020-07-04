#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
double f(double x){
	
	return sqrt(x) + 2 * x + sin(x);
	
}

int main(){
	double x;
	cin>>x;
	cout<<fixed<<setprecision(4)<<f(x);
	
	
}

#include<iostream>
using namespace std;
int main(){
	long long a,b,c;
	cin>>a>>b>>c;
	int w = a/2;
	int t = a%2;
	if(b>=c){
		cout<<(b*(w+t))+c*w;
	}
	else
	cout<<(c*(w+t))+b*w;
	
	return 0;
}

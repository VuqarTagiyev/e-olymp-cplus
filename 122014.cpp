#include<iostream>
using namespace std;
int main(){
	long long a,b,sum = 1;
	cin>>a>>b;
	if(a>0&&b>0) cout<<1;
	else if(a<1&&b>0) cout<<0;
	else{
		if((b+a)%2==0) cout<<1;
		else cout<<-1;
	}
	return 0;
}

#include<iostream>
using namespace std;
int main(){
	int x;
	cin>>x;
	if(x<-4){
		cout<<x+5;
	}
	else if(-4<=x&&x<=7) cout<<x*x-3*x;
	else cout<<x*x*x+2*x;
}

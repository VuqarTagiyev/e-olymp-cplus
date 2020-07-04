#include<iostream>
using namespace std;
int main(){
	unsigned long long f1=0,f2=1,ch;
	int n;
	cin>>n;
	
	for(int i=1;i<n;i++){
		ch = f1;
		f1 +=f2;
		f2 = ch;
	}
	cout<<f1;
	
	
	
	return 0;
}

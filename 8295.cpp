#include<iostream>
using namespace std;
int main(){
	string f1="a",f2="b",fd;
	int n,i=1;
	cin>>n;
	if(n==0) cout<<f1;
	else if(n==1) cout<<f2;
	else{

	do{
		fd=f2+f1;
		f1=f2;
		f2=fd;
		i++;
	}while(i!=n);
		cout<<f2;
		}

	
	
}

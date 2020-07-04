#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int neww=1,m,n;
	cin>>n;
	neww = ((n%10)*10)+((n%100)/10);
	if(n/100==neww){
		cout<<"YES";
	}
	else cout<<"NO";
	
	
	
	return 0;
}

#include<iostream>
using namespace std;
int main(){
	unsigned long long num = 1,ch;
	int n=0;
	long long m;
	cin>>m; 
	for(int i=2;true;){
	n++;
		if(num<=m&&m<num*i){
			cout<<n;
			break;
		}
		
			num*=i;
		
	}
	
	
	
	return 0;
}

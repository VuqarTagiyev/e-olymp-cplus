#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;true;i++){
		int neww=0,j=i;
		while(j!=0&&neww<=n){
			neww+=((j%10)*(j%10)*(j%10));
			j/=10;
		}
		if(neww==n){
			cout<<i;
			break;
		}
		
		
	}
	
}

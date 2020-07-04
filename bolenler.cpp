#include<iostream>
using namespace std;
int main(){
	long long n=1,check=0;
	
	for(;n<1000;n++){

	for(int i=n;true;i+=n){
		check=0;
		for(int j = 1;j<n;j++){
			if(n%j==0){
				continue;
			}
			if(i%j!=0){
				check=1;
			}
			
		}
		if(check==0){
			cout<<i<<endl;
			break;
		}
	}
		}
}

#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n,k;
	unsigned long long end=0,item=1;
	cin>>n;
	int m=pow(10,n-1);
	int d=m*10;
	for(;m<d;m++){
		if(m%10==0){
			continue;
		}
		k=m;
		item=1;
		while(k!=0){
			if(k%10==0){
				item=0;
				break;
				
			}
			item*=k%10;
			k/=10;
			
		}
		end+=item;
		
	}
	cout<<end;
	
	return 0;
}

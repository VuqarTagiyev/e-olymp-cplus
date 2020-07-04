#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	double n,sum=0,a[100];
	int num=1,i=0;
	while(cin>>n){
		
		sum+=n;
		
		if(num%3==0){
			a[i]=sum;
			sum=0;
			i++;
		}
		num++;
	}
	
	for(int j=0;j<i;j++){
		cout<<fixed<<setprecision(4)<<a[j]<<endl;
	}
	
	
	
	return 0;
}

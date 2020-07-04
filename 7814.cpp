#include<iostream>
using namespace std;
int main(){
	/*long long number=0,n=1,m,tnumber=0,k;
	cin>>k;
	for(long long i=1;i<k;i++){
		n*=10;
	}
	for(long long i=n;i<n*10;i++){
		m=i;
		number=0;
		while(m!=0){
			
			if((m%10)%2!=0){
				number++;
			}
			m/=10;
		}
		if(number==k){
			tnumber++;
		}
	}
		cout<<tnumber;
	*/
	long long n,m=1;
	cin>>n;
	for(int i=0;i<n;i++){
		m*=5;
	}
	cout<<m;
	
	
	

	
}	

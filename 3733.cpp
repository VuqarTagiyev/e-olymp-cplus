#include<iostream>
using namespace std;
int main(){
	unsigned long long n,end=1;
	cin>>n;
	for(;n<31;n++){
	end=1;
	for(long long i=n;i>1;i--){
		if(end%i!=0){
			end*=i;
		}
	}
	cout<<end<<endl;
}
}

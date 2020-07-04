#include<iostream>
using namespace std;
int main(){
	int n,sum=0,end=0,num=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
	cin>>a[i];
	sum+=a[i];
}
sum/=n;
for(int i=0;i<n;i++){
	if(sum<a[i]){
		end+=a[i];
		num++;
	}
}


cout<<end<<" "<<num;
}

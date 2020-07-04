#include<iostream>
using namespace std;
int main(){
	int n,max=-32645,maxa=-32645,c;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
	cin>>a[i];
	if(max<a[i]){
		max=a[i];
		c=i;
	}
	
	
}
for(int i=0;i<n;i++){
	if(a[i]>maxa&&i!=c){
		maxa=a[i];
	}
}
cout<<max+maxa;
}

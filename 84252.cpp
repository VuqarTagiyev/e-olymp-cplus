#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int n,a,b,max = 0 ,min =1001;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		if(a>max){
			max = a;
		}
		if(b<min){
			min = b;
		}
	}
	cout<<(min - max)+1;
}

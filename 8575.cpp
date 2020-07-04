#include<iostream>
using namespace std;
int main(){
	int n,say,num=8,a[9]={1,2,5,10,20,50,100,200,500};
	cin>>n;
	while(true){
		if(a[num]<=n){
			n-=a[num];
			say++;
		}
		else{
			if(num==0){
				break;
			}
			num--;
		}
		
	}
	cout<<say;
	
	return 0;
}

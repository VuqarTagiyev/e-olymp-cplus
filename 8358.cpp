#include<iostream>
using namespace std;
int main(){
	int n,a[100],i=0,max=0,min=10000,sum;
	
	while(cin>>n){
		a[i]=n;
		i++;
	}
	for(int j=0;j<i;j++){
		if(a[j]>max){
			max=a[j];
		}
		if(min>a[j]){
			min=a[j];
		}
		sum+=a[j];
	}
	cout<<((sum-max)-min)/(i-2);
	/*butun boyukler ve kicikleri goturmeliyik*/
	
}

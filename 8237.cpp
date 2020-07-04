#include<iostream>
using namespace std;
int main(){
	int  n;
	cin>>n;
	int i,j,arr[n],change;
	for(int i=0;i<n;i++) cin>>arr[i];
	for(int i=n;i>1;i--){
		for(int j=1;j<=n;j++){
			if(arr[j-1]>arr[j]&&j<i) {
				change=arr[j-1];
				arr[j-1]=arr[j];
				arr[j]=change;
			}
			cout<<arr[j-1]<<" ";
		}
		cout<<endl;
	}
	
	
}

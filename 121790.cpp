#include<iostream>
using namespace std;
int main(){
	long long n, k = 1;
	cin>>n;
	int arr[n][n];
	for(int i = 0 ;i <n;i++){
		if(i%2==0){
		for(int j=0;j<n;j++){
			arr[i][j] = k ;
			k++;
		}	
		}
		else{
		for(int j=n-1;j>=0;j--){
			arr[i][j] = k ;
			k++;
		}	
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j]<<" ";
		}cout<<endl;
	}
	return 0;
}

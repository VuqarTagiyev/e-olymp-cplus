#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	int max=-32564,min = 32456,maxi,mini,change;
	for(int i=0;i<n;i++){
		if(arr[i] >max){
			max = arr[i];
			maxi = i;
			
		}
		if(min>arr[i]){
			min = arr[i];
			mini = i;
		}
	}
 	for(int i=0;i<n;i++){
 		if(arr[i]  == max){
 			cout<<min<<" ";
		 }
 		else if(arr[i] == min){
 			cout<<max<<" ";
		 }
		 else
 		cout<<arr[i]<<" ";
	 }
	
	
	
	return 0;
}

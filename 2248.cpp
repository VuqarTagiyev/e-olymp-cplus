#include<iostream>
using namespace std;
int main(){
	int n,min = 32767,x;
	cin>>n>>x;
	long long arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	int  y = x,i = 0, j =i;
	for(int i=0;i<n;i++){
		if(arr[i]<min){
			min = arr[i];
		}
		if(i == y-1){
			i = j;
			j++;
			y++;
			
			cout<<min<<" ";
			min = 32767;
		}
		if(y-1 == n){
			break;
		}
	}
	return 0;
}

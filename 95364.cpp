#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
	long long n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	sort(arr,arr+n);
	cout<<arr[n-1] - arr[0];
	
}

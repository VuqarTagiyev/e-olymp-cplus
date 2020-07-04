#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int main(){
	int n,num = 0,k,j = 0;
	cin>>n>>k;
	vector <int> arr;
	
	while(n!=0){
		long long m = (n - (n/2) * 2 );
		arr.push_back(m);
		n/=2;
		num++;
	}
	if(arr[k-1] == 1) arr[k-1] = 0;
	else arr[k-1] = 1;
	for(int i=num-1;i>=0;i--){
		n+=arr[i] * pow(2,j);
		j++;
	}
	cout<<n;
	
	
	
	
	
}

#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int n,num = 0;
	cin >> n ;
	double arr[n];
	for (int i = 0 ; i < n ; i++){
		cin >> arr[i];
		num++;
		if(arr[i] <= 2.5){
			cout<<num<<" "<<fixed<<setprecision(2)<<arr[i];
			break;
		}
		if(arr[n-1] >2.5) cout<<"Not Found";
	}
}

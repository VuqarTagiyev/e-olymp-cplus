#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int n;
	cin >> n ;
	double arr[n],max = 0;
	for (int i = 0 ; i < n ; i++){
		cin >> arr[i];
		if(arr[i]<0){
			arr[i]*=-1;
		}
		if(max< arr[i]) max = arr[i];
		
	}
	cout<<fixed<<setprecision(2)<<max;
}

#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int n,num = 0;
	cin >> n ;
	double arr[n],sum = 0;
	for (int i = 0 ; i < n ; i++){
		cin >> arr[i];
		if(0 >arr[i]){
			sum+=arr[i];
			num++;
	}
	}
	cout<<num<<" "<<fixed<<setprecision(2)<<sum;
}

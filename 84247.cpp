#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int n;
	cin >> n ;
	double arr[n],min = 32564;
	for (int i = 0 ; i < n ; i++){
		cin >> arr[i];
		if(min > arr[i]) min = arr[i];
		
	}
	cout<<fixed<<setprecision(2)<<min*2;
}

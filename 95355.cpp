#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
	long long a,b;
	vector <int> a_arr,b_arr,arr_end;
	while(cin>>a){
		cin>>b;
		a_arr.push_back(a);
		b_arr.push_back(b);
		vector <int> arr;
		for(;a<=b;a++){
			int size = 1;
			long long i = a;
				while(i!=1){
					if(i%2==0){
						i/=2;
						size++;
					}
					else{
						i*=3;
						i+=1;
						size++;
						}
				}
			arr.push_back(size);
		}
		sort(arr.begin(),arr.end());
		arr_end.push_back(arr.back());
	}
	for(int i = 0;i<arr_end.size();i++){
	cout<<a_arr[i]<<" "<<b_arr[i]<<" "<<arr_end[i]<<endl;
	}


	
	
	
	
}

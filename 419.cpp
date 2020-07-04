#include<iostream>
#include<algorithm>
using namespace std;
int f(int n)
	{
		int i;
		for(i = 1; n != 1;i++){
			if(n%2) n = 3 * n + 1;
			else n /= 2;	
		}
		return i;
	}
	int maks(int i,int j){
		int mx;
		for(; i <= j;i++){
			mx = max(mx,f(i));
		}
		return mx;
	}
int main(){
	int i,j;
	while(cin>>i>>j){
		int temp ,itemp = i,jtemp = j;
		if(i > j){
	 temp =i; i = j ; j =temp;	}
		cout<<itemp<<" "<<jtemp<<" "<<maks(i, j);	
	}
	
}














//#include<iostream>
//#include<vector>
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	long long a,b;
//	vector <int> a_arr,b_arr,arr_end;
//	while(cin>>a){
//		cin>>b;
//		a_arr.push_back(a);
//		b_arr.push_back(b);
//		vector <int> arr;
//		for(;a<=b;a++){
//			int size = 1;
//			long long i = a;
//				while(i!=1){
//					if(i%2==0){
//						i/=2;
//						size++;
//					}
//					else{
//						i*=3;
//						i+=1;
//						size++;
//						}
//				}
//			arr.push_back(size);
//		}
//		sort(arr.begin(),arr.end());
//		arr_end.push_back(arr.back());
//	}
//	for(int i = 0;i<arr_end.size();i++){
//	cout<<a_arr[i]<<" "<<b_arr[i]<<" "<<arr_end[i]<<endl;
//	}
//
//
//	
//	
//	
//	
//}

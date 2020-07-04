#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	double max = -32000,min = 32000,cem=0;
	int n,m;
	cin>>n>>m;
	double a[n][m];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++)cin>>a[i][j];
	}
	
	for(int i=0;i<m;i++){
		max = -32000;
		int num=0;
		for(int j=0;j<n;j++){
			if(max<a[i][j]){
				max=a[i][j];
			}
		}
		min = 32000;
		for(int k=0;k<n;k++){
			if(min>a[i][k]){
				min=a[i][k];
			}
		}
		for(int l=0;l<n;l++){
			if(max!=a[i][l]&&min!=a[i][l]){
				cem+=a[i][l];
				num++;
			}
		}
		cout<<max<<" "<<min<<" "<<fixed<<setprecision(2)<<cem/num<<"            ";
		
	}
	
	
	
	
	return 0;
}

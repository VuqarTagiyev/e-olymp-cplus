#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int tort=0,say=1;
	float sud;
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]<30){
			tort++;
			sud+=200;
		}
	}

	if(tort==0)cout<<"0 0";
	else{
		sud=0.2*tort;
		if(sud<=0.9) cout<<1;
		else{
			sud=sud/0.9;
			cout<<ceil(sud);
		}
		cout<<" "<<tort;	
	}
	return 0;
}

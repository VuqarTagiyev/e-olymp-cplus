#include<iostream>
using namespace std;
int main(){
	long long n;
	cin>>n;
	if(n==1){
		cout<<"0 1 2 3 4 5 6 7 8 9";
	}
	else if(n==2){
		cout<<"1 2 3 4 5 6 7 8 9 10";
	}
	else if(n==3){
		cout<<"2 4 6 8 10 12 14 16 18 20";
	}
	else if(n==4){
		cout<<"1 3 5 7 9 11 13 15 17 19";
	}
	else if(n==5){
		cout<<"5 10 15 20 25 30 35 40 45 50";
	}
	else if(n==6){
		cout<<"9 8 7 6 5 4 3 2 1 0";
	}
}

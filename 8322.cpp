#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	switch(n){
	case 1:
		cout<<1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10;
	break;
	case 2:
		cout<<2 + 4 + 6 + 8 + 10 + 12 + 14 + 16 + 18 + 20;
	break;
	case 3:
		cout<<1 + 3 + 5 + 7 + 9 + 11 + 13 + 15 + 17 + 19;
	break;
	case 4:
		cout<<4 + 8 + 12 + 16 + 20 + 24 + 28 + 32 + 36 + 40;
	break;
	case 5:
		cout<<1 + 4 + 7 + 10 + 13 + 16 + 19 + 22 + 25 + 28;
	break;
	case 6:
		cout<<5 + 10 + 15 + 20 + 25 + 30 + 35 + 40 + 45 + 50;
		break;
	}
}

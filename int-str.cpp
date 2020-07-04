#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int  n = 51512;
	string s = "";
	
	
	
	
	for(int i=4;i>=0;i--){
		char v = (n/pow(10,i))+48;
		cout<<v;
//		s +=v*pow(10,i);
		n%=pow(10,i);
	}
	cout<<s;
	
	
	
	return 0;
}

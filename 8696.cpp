#include<iostream>
using namespace std;
int main(){
	string a;
	cin>>a;
	string two1="2",five1="5";
	int i=0,two=0,five=0;
	while(true){
		
		if(a[i]==two1[0]){
		 two++;}
		else if(a[i]==five1[0])five++;
		i++;
		if(a[i]==0) break;
	}
	if(two>five)cout<<2;
	else if(two<five)cout<<5;
	else cout<<"=";
	
	
	
	
	return 0;
}

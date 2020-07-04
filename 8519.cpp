#include<iostream>
using namespace std;
int main(){
	string a;
	int sum=0,i=0;
	cin>>a;
	while(a[i]!='\0'){
		if(a[i]=='2'||a[i]=='4'||a[i]=='6'||a[i]=='8'){
			if(a[i]=='2'){
				sum+=2;
			}
			else if(a[i]=='4') sum+=4;
			else if(a[i]=='6') sum+=6;
			else if(a[i]=='8') sum+=8;
		}
		i++;
		
	}
	cout<<sum;
	
	
	return 0;
}

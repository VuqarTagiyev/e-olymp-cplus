#include<iostream>
#include<iomanip>
using namespace std;
 
int main (){
    double a,b;
    cin>>a>>b;
    if(a>b){
    	if(a/3>b/2){
    		cout<<fixed<<setprecision(3)<<a/3;
		}
		else cout<<fixed<<setprecision(3)<<b/2;
	}
    else {
    	if(b/3>a/2){
    		cout<<fixed<<setprecision(3)<<b/3;
		}
		else cout<<fixed<<setprecision(3)<<a/2;
	}
    
}
   

#include<iostream>
 
using namespace std;
 
int main (){
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b>=c){
		if(a+c<b){
			cout<<a*2+c*2;
		}
		else if(b+c<a) cout<<b*2+c*2;
		else cout<<a+b+c;
    }
    else cout<<a*2+b*2;
    
    
    
    
}
   

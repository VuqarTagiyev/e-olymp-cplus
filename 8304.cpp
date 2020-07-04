#include<iostream>
using namespace std;
int f(int x,int y){
	if(x<=0||y<=0) return 0;
	else if(x<=y) return f(x-1,y-2)+f(x-2,y-1)+2;
	else return f(x-2,y-2)+1;
	
}

int main(){
	int x,y;
	cin>>x>>y;
	cout<<f(x,y);
	
	
}

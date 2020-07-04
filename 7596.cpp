#include<iostream>
#include<iomanip>
using namespace std;
 
int main (){
    int n;
    cin>>n;
    switch(n){
    	case 1:
    		cout<<"1 4 9 16 25 36 49 64 81 100";
    		break;
    	case 2:
    		cout<<"1 8 27 64 125 216 343 512 729 1000";
    		break;
    	case 3:
    		cout<<"2 5 10 17 26 37 50 65 82 101";
    		break;
    	case 4:
    		cout<<"2 6 12 20 30 42 56 72 90 110";
    		break;
    	case 5:
    		cout<<"2 4 8 16 32 64 128 256 512 1024";
    		break;
    	case 6:
    		cout<<"1 2 6 24 120 720 5040 40320 362880 3628800";
    		break;
	}
}
   

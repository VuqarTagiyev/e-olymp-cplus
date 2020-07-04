#include<iostream>
#include<iomanip>
using namespace std;
 
int main (){
    int n;
    cin>>n;
    double a;
    switch(n){
    	case 1:
    		a=((double)1/2 + (double)2/3 + (double)3/4 + (double)4/5 + (double)5/6 + (double)6/7 + (double)7/8 + (double)8/9 + (double)9/10 + (double)10/11);
    		cout<<fixed<<setprecision(2)<<a;
    		break;
    	case 2:
    		a=(double)1/2 + (double)3/4 + (double)5/6 + (double)7/8 + (double)9/10 + (double)11/12 + (double)13/14 + (double)15/16 + (double)17/18 + (double)19/20;
    		cout<<fixed<<setprecision(2)<<a;
    		break;
    	case 3:
    		a=(double)1/1 + (double)2/3 + (double)3/5 + (double)4/7 + (double)5/9 + (double)6/11 + (double)7/13 + (double)8/15 + (double)9/17 + (double)10/19;
    		cout<<fixed<<setprecision(2)<<a;
    		break;
    	case 4:
    		a=(double)2/3 + (double)4/5 + (double)6/7 + (double)8/9 + (double)10/11 + (double)12/13 +(double)14/15 + (double)16/17 + (double)18/19 + (double)20/21;
    		cout<<fixed<<setprecision(2)<<a;
    		break;
    	case 5:
    		a=(double)1/3 + (double)3/6 + (double)5/9 + (double)7/12 + (double)9/15 + (double)11/18 + (double)13/21 + (double)15/24 + (double)17/27 + (double)19/30;
    		cout<<fixed<<setprecision(2)<<a;
    		break;
    	case 6:
    		a=(double)1/2 + (double)2/5 + (double)3/8 + (double)4/11 + (double)5/14 + (double)6/17 + (double)7/20 + (double)8/23 + (double)9/26 + (double)10/29;					
    		cout<<fixed<<setprecision(2)<<a;
    		break;																	
	}
}
   

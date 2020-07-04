#include <iostream>
#include <cmath>
using namespace std;
void print_num(int *A);
void pro_num(int *A, int t);
int main(void)
{
 int num[10000];
 int n,i;
 cin>>n;
 if (n==0) { cout<<"1"<<endl; return 0; }
 num[0]=1;
 for (i=1; i<10000; i++) { num[i]=0; }
 for (i=1; i<=n; i++)
  {
   pro_num(num,i);
  }
 print_num(num);
 return 0;
}
 
void pro_num(int *A, int t)
{
 int i; int p=0;
 for (i=0; i<10000; i++) A[i]*=t;
 for (i=0; i<10000; i++)
  {
   A[i]+=p;
   p=A[i]/10;
   A[i]%=10;
  }
}
 
void print_num(int *A)
{
 int i;
 for (i=9999; i>0; i--) if (A[i]!=0) break;
 for ( ; i>=0; i--) cout<<A[i];
 cout<<endl;
}

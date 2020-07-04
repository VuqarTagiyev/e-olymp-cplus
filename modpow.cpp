#include <iostream>

using namespace std;

int modpow(int a,int b,int c) //optimal modpow alqoritmi
{
int netice = 1;
while (b != 0)
{ 
if (b % 2 == 1)
{ netice = netice * a % c; }
a = ((a % c) *( a % c)) % c; 
b = b / 2;
} 

return netice;
}

main()
{
       int a,b,c;
       cin>>a>>b>>c;
       cout<<modpow(a,b,c);
   system("PAUSE");
   return 0;
}


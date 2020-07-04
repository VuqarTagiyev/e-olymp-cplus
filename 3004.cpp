#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int time = 0,n,k,min=32564,l=0,i;
    cin>>n>>k;
    int a[n],s[k];
    for(i=k-1; i>=0; i--)
        {
            s[i] = l;
            l--;
        }
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0;i<n;i++){
    min=32564;
    for(int j=0; j<k; j++)
        {
            if(s[j] < min)
                {
                    min = s[j];
                }
        }
    for(int j=0; j<n; j++)
        {
            if(s[j]==min)
                {
                    if(s[j]<0)
                        {
                            s[j] = 0;
                        }
                    s[j]+=a[i];
                    break;
                }
        }	}
	vector <int> v;
for(int j = 0 ;j<k ; j++) v.push_back(s[j]);
	sort(v.begin(),v.end());
cout<<v.back();

}

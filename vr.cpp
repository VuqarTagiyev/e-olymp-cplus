
#include<iostream>
using namespace std;
int main()
{
    long long int n,m;

    cin>>n>>m;

    long long k=n,l=m,size_n=0,size_m=0;

    for(; k!=0; size_n++) k/=10;
    for(; l!=0; size_m++) l/=10;

    int arr_n[size_n+1],arr_m[size_m+1];
    
    arr_n[size_n] = 0;
    for(int i=0; i<size_n; i++)
        {
            arr_n[i] = n%10;
            n/=10;
        }
        arr_m[size_m] = 0;
    for(int i=0; i<size_m; i++)
        {
            arr_m[i] = m%10;
            m/=10;
        }
        size_m++;
//for (int i=0;i<=size_n;i++) cout<<arr_m[i]<<" ";
    int size = size_m + size_n + 1,k_n=0,k_m=0,ch=0;
    int arr[size_m][size];
    for(int i=0;i<size_m;i++)
    	for(int j=0;j<size;j++) arr[i][j] = 0;
        
        
        
       
    int size2 = size;
    int sizen = size_m;
    for(int j = 0; j<size_m; j++)
        {
        	k_n = 0;
        	ch = 0;
            for(int i = (size2-1); i>=sizen; i--)
                {
                    arr[j][i] += (arr_n[k_n]*arr_m[k_m]) ; 
                    ch = arr[j][i] /10;
                    arr[j][i] %=10;
                  	arr[j][i-1] +=ch;
                    //cout<<arr[i][j]<<" ";
                    k_n++;
                }
                k_m++;
                cout<<endl;
            size2--;
            sizen--;
        }

    for(int i=0; i<size_m; i++)
        {
            for(int j = 0; j<size; j++)
                {
                    cout<<arr[i][j]<<" ";
                }
            cout<<endl;
        }
        cout<<endl;
    int arr_end[size+1],save = 0;
    for(int i=0;i<size+1;i++) arr_end[i]= 0;
    for(int i=0;i<size;i++){
    	int sum=0;
    	for(int j=0;j<size_m;j++){
    		sum += arr[j][i];
		}
		arr_end[i]+=sum;
		save = arr_end[i]/10;
		arr_end[i]%=10;
		arr_end[i+1] =save;
	}
	for(int i=0;i<size+1;i++) cout<<arr_end[i]<<" ";



}


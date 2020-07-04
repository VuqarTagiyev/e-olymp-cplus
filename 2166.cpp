#include<iostream>
using namespace std;
int main(){
	char name1[100],name2[100];
	int size=0,size2=0,num=0;
	cin>>name1>>name2;
	for(int i=0;i<100;i++){
		if(name1[i] == '\0')break;
		size++;
	}
	for(int i=0;i<100;i++){
		if(name2[i] == '\0')break;
		size2++;
	}
	//cout<<size<<endl<<size2;
	for(int i=0;i<size;i++){
		for(int j=0;j<size2;j++){
			if(name1[i] == name2[j]){
				num++;
				name2[j] = 0;
				break;
			}
		}
	}
	if(num == size){
		cout<<"YES";
	}
	else cout<<"NO";
	
}

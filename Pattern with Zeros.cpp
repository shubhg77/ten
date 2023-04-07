1
2 2
3 0 3
4 0 0 4
5 0 0 0 5
for n=5;
======================================CODE================
#include<iostream>
using namespace std;
int main() {
int rowno=1;
int tr;
cin>>tr;
while(rowno<=tr)
{
int i=1;
while(i<=rowno){
	if(i==1 or i==rowno)
	cout<<rowno<<" ";
	else{
		cout<<0<<" ";
	}
	i=i+1;
}
cout<<endl;
rowno=rowno+1;



}

	return 0;
}

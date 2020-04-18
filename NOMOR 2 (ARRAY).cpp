#include <iostream>
using namespace std;

int main () {
int  n, array[100];
int jumlah = 1;
cin>>n;
for (int i=0; i<n; i++){
cin>>array[i];
}
system("cls");
cout<<"jumlah bilangan : "<<n<<endl;
for (int i=0; i<n; i++){
cout<<" "<< array[i];
jumlah*=array[i];
}
cout<<"\nHasil Pengalian : " <<jumlah;
}

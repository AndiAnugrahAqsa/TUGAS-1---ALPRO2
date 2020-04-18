#include <iostream>
using namespace std;

int main(){
int n,array[100];
int jumlah=0;
cout<<"Masukkan batas jumlah bilangan : ";
cin>>n;
cout<<"Masukkan bilangan : \n";
for (int i=0;i<n;i++){
cin>>array[i];
}
system("cls");
cout<<"Jumlah bilangan : "<<n<<endl;
for (int i=0;i<n;i++){
cout<<" "<<array[i];
jumlah += array[i];
}
cout<<"\nHasil Penjumlahan : "<<jumlah;
 }

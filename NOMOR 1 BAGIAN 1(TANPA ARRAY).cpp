#include <iostream>
using namespace std;
int main() {
int n, data, hasil = 0;
cout<<"Masukkan batas jumlah bilangan : ";cin>>n;
cout<<"Masukkan bilangan : ";
for (int i=0;i<n;i++){
cin>>data;
hasil += data;
}
cout<<"\nHasil Penjumlahan : "<<hasil;
}

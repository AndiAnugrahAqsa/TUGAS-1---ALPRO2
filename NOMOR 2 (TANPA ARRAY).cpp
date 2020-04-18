#include <iostream>
using namespace std;

int main (){
int n, data;
int hasil = 1;
cout<<"Jumlah bilangan = ";
cin >> n;
cout<<"Masukkan bilangan = ";
for (int i =0; i<n; i++){
cin>>data;
hasil *=data;
}
cout<<"\nHasil perkalian : "<<hasil;
}

#include <iostream>
using namespace std;

int main (){
int array [3][3] = {{2,4,6},{8,10,12},{14,16,18}};
int k = 1;
int jumlahdus = 9;
system("cls");
cout<< "jumlah dus : "<< jumlahdus <<endl;
cout<< "Nomor Dus : ";
for(int i=0; i<3; i++){
for (int j = 0; j<3; j++){
cout<<" " <<array[i][j];
}
}
cout<<endl;
for(int i=0; i<3; i++){
for (int j = 0; j<3; j++){
cout<< "Nomor dus ke "<<k++<<" = "<<array[i][j]<<endl;
}
}
}

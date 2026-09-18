#include <iostream>
using namespace std;

int main(){

    //soal 1 angka 1-100
    for(int i=1;i<=100;i++){
            cout<<"angka "<<i<<endl;
    }

    //soal 1 segitiga
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
                cout<<j<<" ";
        }
        cout<<endl;
    }

    //soal 1 titik titik
    for(int i=1;i<=3;i++){
        for(int j=1;j<=4;j++){
            cout<<". ";
        }
        cout<<endl;
    }

    //soal 2 kategori listrik
    int kwh = 175;

    if(kwh>=300){
        cout<<"Kategori Boros - Sebaiknya hemat listrik";
    }
    else if(kwh>=150 && kwh<=299){
            cout<<"Kategori sedang - Pemakaian cukup wajar";
    }
    else if(kwh>=50 && kwh<=149){
        cout<<"Kategori hemat - Pemakaian hemat";
    }
    else{
        cout<<"Kategori Sangat hemat - pemakaian sangat hemat";
    }

    return 0;
}

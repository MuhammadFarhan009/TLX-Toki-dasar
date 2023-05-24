#include <iostream>
using namespace std;
int main(){
    int A;
    cin >>A;
    if(A >0 && A<10 ){
        cout << "satuan";
    }else if ( A >= 10 && A < 100){
        cout << "puluhan" << endl;
    }else if ( A >=100 && A <1000){
        cout << "ratusan" << endl;
    }else if (A >= 1000 && A< 10000){
        cout << "ribuan" << endl;
    }else{
        cout << "puluhribuan" << endl;
    }
}
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    float A,B;
    cin >> A >> B;
    double C = A*B/2;
    cout << fixed << setprecision(2) << C << endl;

}
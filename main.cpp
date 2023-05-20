#include <iostream>
#include <cmath>
using namespace std;

float f(float x){
    return pow(x,2)*cos(x)+1;
}


int main() {
   float a=0, b=0, x=0, err=0;

    do{
        cout << "inserire estremi" << endl;
        cin >> a;
        cin >> b;
    }while (f(a)*f(b) >= 0);

    do{
        a=(a+b)/2;
        if (f(x) == 0){
            break;
        }else if (f(a)*f(b) < 0){
            b=x;
        }else{
            a=x;
        }
        err = abs((b-a)/2);
    }while (err >= 1e-6);

    cout << x << endl;
    cout << f(x) << endl;
   return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

float f(float y){
    return (y*y)*cos(y)+1;
}

int main() {
    float a=0, b=0, x=0, err=0, d=0, e=0;
    do {
        cout << "inserire estremi" << endl;
        cin >> a >> b;
    } while (f(a)* f(b)>=0);

    do {
        x=(a+b)/2;
        if(f(x) == 0){
        }else {
            if(f(a)*f(x)<0){
                b=x;
            } else if(f(a)*f(x)>0) {
                a=x;
            }
            err=abs((b-a)/2);
        }
    } while(err >= 0.00002);

    x=x*10000;
    d=int(x);
    e=d/10000;
    cout << e ;
    return 0;
}

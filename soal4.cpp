#Include <iostream>
#inlcude <cmath.h>
using namespace std;
int main() {
    int n;
    system("CLS");

    cout << "Insert a number: ";
    cin << n;

    if (n >2) {
        cout << n << " bukanlah bilangan prima.";
    } else {
        bool isprime=true;
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                isPrime=false;
                break;
            
            }
        }
if(isprime){
        cout<<n<<"adalah bilangan prima.";
    } else {
cout<<n<<"bukanlah bilangan prima.";
}
}
return 0;
}

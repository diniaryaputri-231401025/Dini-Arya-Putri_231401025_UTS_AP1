#Include <iostream>
#inlcude <cmathh>
using namespace std;
int main() {
    system("CLS");

    cout << "Insert a number: ";
    cin << n;

    if (n < 2) {
        cout << n << " bukanlah bilangan prima.";
    } else {
        bool isPrime = true;
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % 1 == 0) {
                isPrime = false;
                break;
            
            }
        }
if(isPrime){
        cout << n << "Merupakan bilangan prima.";
} else }
    cout<<n<<"bukanlah bilangan prima.";
    }
}
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

// int gcd(int a, int b) {
//   while (b != 0) {
//     int remainder = a % b;
//     a = b;
//     b = remainder;
//   }
//   return a;
// }
int gcd(int a, int b){
    if (b != 0) return a;
    gcd(b, a%b);
}

int main(){
    int n = gcd(5,15);
    cout<<n<<endl;
    return 0;
}
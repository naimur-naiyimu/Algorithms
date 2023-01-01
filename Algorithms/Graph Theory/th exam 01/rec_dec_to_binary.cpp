#include <bits/stdc++.h>
using namespace std;

string int_to_binary(int decimal)
{
    if( decimal == 0){
        return "0";
    }
    if( decimal == 1){
        return "1";
    }
    return (int_to_binary(decimal/2) + int_to_binary(decimal % 2));
}
int main(){
    string s = int_to_binary(25);
    cout<<s<<endl;
    return 0;
}
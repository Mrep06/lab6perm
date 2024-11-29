#include<iostream>
using namespace std;

int main(){
    int i = 0;
    int x;
    int Odd = 0;
    int Even =0;
    while(i == 0){
    cout << "Enter an integer: ";
    cin >> x;
    if(x == 0){
        break;
    }
    if(x % 2 == 0){
        Even++;
    }
    
    if(x % 2 != 0){
        Odd++;
    }

    }
    cout << "#Even numbers = " << Even  << "\n" ;
    cout << "#Odd numbers = " << Odd;
    return 0;
}

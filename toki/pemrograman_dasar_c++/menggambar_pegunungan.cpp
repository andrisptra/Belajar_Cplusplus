#include <iostream>
using namespace std;

void gambarGunung(int n){
    if (n == 1){
        cout << "*"<< endl;
    }else{
        gambarGunung(n-1);
        
        for(int i = 0; i < n; i++){
            cout << "*";
        }
        cout << endl;
        gambarGunung(n-1);
    }
}

int main(){
    int N;
    cin >> N;
    
    gambarGunung(N);
}

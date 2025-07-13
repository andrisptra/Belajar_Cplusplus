#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    
    int kounter = 0;
    
    for(int i = 0; i < N;i ++){
       for (int j = 0; j <= i; j++){
           cout << kounter % 10;
           kounter ++;
       }
       cout << endl;
    } 
    return 0;
}

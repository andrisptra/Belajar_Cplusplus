#include <iostream>
using namespace std;

int absolute(int A, int B, int x){
    int result = A*x + B;
    
    return (result < 0) ? -result : result;
}

int main(){
    int A;
    cin >> A;
    int B;
     cin >> B;
    int K;
     cin >> K;
    int x;
     cin >> x;
     
     int result = absolute(A,B,x);
     for(int i = 0; i<K-1;i++){
         result = absolute(A,B,result);
     }
     
     cout << result;
}

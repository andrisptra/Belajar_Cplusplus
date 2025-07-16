#include <iostream>
using namespace std;

bool bilanganPrima(int n){
   if (n <= 1) {
        return false; // Bilangan <= 1 bukan prima
    }
    if (n == 2 || n == 3) {
        return true; // 2 dan 3 adalah bilangan prima
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return false; // Bilangan genap atau kelipatan 3 bukan prima
    }
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false; // Jika habis dibagi bilangan lain, bukan prima
        }
    }
    return true; // Jika lolos semua pengecekan, maka prima
}
int main(){
    
    int Q;
    cin >> Q;
    
    long long bilangan[Q];
    for(int i = 0; i < Q; i++){
        cin >> bilangan[i];
    }
    
     for(int i = 0; i < Q; i++){
        if(bilanganPrima(bilangan[i]) == true){
            cout << "YA" << endl;
        }else{ 
            cout << "BUKAN" << endl; 
        }
    }
    
    

}

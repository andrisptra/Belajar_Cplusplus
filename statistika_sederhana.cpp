#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    
    int arr[N];
    for (int i = 0; i < N; i++){
        cin >> arr[i];
    }
    
    int terbesar = arr[0];
    int terkecil = arr[0];
    for (int i = 0; i < N;i++){
        if (arr[i] > terbesar){
            terbesar = arr[i];
        }
         if(arr[i] < terkecil){
            terkecil = arr[i];
        }
    }
  
    cout << terbesar << " " << terkecil;
}

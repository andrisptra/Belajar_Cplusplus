#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    
    int M;
    cin >> M;
    
    int P;
    cin >> P;
    
    int matriks_A[N][M];
    int matriks_B[M][P];
    int matriks_C[N][P];
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> matriks_A[i][j];
        }
    }
    
     for(int i = 0; i < M; i++){
        for(int j = 0; j < P; j++){
            cin >> matriks_B[i][j];
        }
    }
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < P; j++){
            matriks_C[i][j] = 0;
        }
    }
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < P; j++){
            for(int k = 0; k < M;k++){
                matriks_C[i][j] += matriks_A[i][k] * matriks_B[k][j];
            }
        }
    }
    
     for(int i = 0; i < N; i++){
        for(int j = 0; j < P; j++){
            cout << matriks_C[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}

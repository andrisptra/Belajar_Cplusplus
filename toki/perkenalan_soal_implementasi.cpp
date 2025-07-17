#include <iostream>
#include <vector>
using namespace std;


void putar_matriks(int N, int M, vector<vector<int>> & matriks, vector<vector<int>> & matriks_baru){
    
    for(int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            matriks_baru[j][N-1-i] = matriks[i][j];
        }
    }
}


void input_matriks(int N, int M,  vector<vector<int>>& matriks){
    for(int i = 0; i < N; i++){
        vector<int> baris;
        for(int j = 0; j < M; j++){
            int elemen;
            cin >> elemen;
            baris.push_back(elemen);
        }
        matriks.push_back(baris);
    }
}

void cetak_matriks(int N, int M, const vector<vector<int>>& matriks){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int N , M;
    cin >> N >> M;
    
    vector<vector<int>> matriks;
    vector<vector<int>>matriks_baru(M, vector<int>(N));
    
    input_matriks(N,M,matriks);
    putar_matriks(N,M,matriks, matriks_baru);
    cetak_matriks(N,M,matriks_baru);
    
}

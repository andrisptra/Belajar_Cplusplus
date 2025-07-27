#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

using Matrix = vector<vector<int>>;

// fungsi untuk melakukan refleksi matriks secara horizontal
void reflectHorizontal(Matrix& mat, int n, int m){
    for (int i = 0; i < n/2; i++)
    {
        swap(mat[i], mat[n-1-i]);
    }
    
}
// fungsi untuk mereflekasikan matriks secara vertical
void reflectVertikal(Matrix& mat, int n, int m){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m/2; j++)
        {
            swap(mat[i][j],mat[i][m-1-j]);
        }
    }
    
}
// fungsi memutar matriks secara 90 derajat
void rotate90(Matrix& mat, int& n, int& m){
    Matrix temp(m, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            temp[j][n-1-i] = mat[i][j];
        }  
    }
    mat = temp;
    swap(n,m);
    
}

void rotate180(Matrix& mat, int n, int m){
    reflectHorizontal(mat,n,m);
    reflectVertikal(mat,n,m);
}

void rotate270(Matrix& mat, int& n, int& m){
    Matrix temp(m, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            temp[m-1-j][i] = mat[i][j];
        }
        
    }
    mat = temp;
    swap(n,m);
    
}

// prosedure untuk melakukan input matriks
void input_matriks(int N, int M,  vector<vector<int>>& matriks){
    for(int i = 0; i < N; i++){
        vector<int> baris;
        for(int j = 0; j < M; j++){
            cin >> matriks[i][j];
        }
    }
}
// prosedure untuk melakukan proses cetak matriks
void cetak_matriks(const Matrix& mat, int n, int m){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << mat[i][j] << (j == m -1 ? "" : " ");
        }
        cout <<endl;
    }
}

int main(){
    int N , M, K;
    cin >> N >> M >> K;
    
    Matrix matriks(N, vector<int>(M));

    input_matriks(N,M,matriks);

    for (int i = 0; i < K; i++)
    {
        string x;
        cin >> x;
        if (x == "_") {
             reflectHorizontal(matriks , N, M);
        } else if (x == "|") {
             reflectVertikal(matriks , N, M);
        } else if (x == "90") {
             rotate90(matriks , N, M);
        } else if (x == "180") {
             rotate180(matriks , N, M);
        } else if (x == "270") {
             rotate270(matriks , N, M);
        }
    }
    
    cetak_matriks(matriks, N, M);
    
}
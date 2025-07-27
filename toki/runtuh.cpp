#include <iostream>
#include <vector>

using Matrix = std::vector<std::vector<int>>;

int main(){
    int baris, kolom;
    std::cin >> baris, kolom;

    Matrix matriks(baris, std::vector<int>(kolom));

    return 0;
}
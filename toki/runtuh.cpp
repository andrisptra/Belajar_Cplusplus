#include <iostream>
#include <vector>

using Matrix = std::vector<std::vector<char>>;

// fungsi input matriks
void input_matriks(int baris, int kolom, Matrix &matriks) {
  for (int i = 0; i < baris; i++) {
    for (int j = 0; j < kolom; j++) {
      std::cin >> matriks[i][j];
    }
  }
}
// fungsi cetak matriks
void cetak_matriks(int baris, int kolom, const Matrix &matriks) {
  for (int i = 0; i < baris; i++) {
    for (int j = 0; j < kolom; j++) {
      std::cout << matriks[i][j];
    }
    std::cout << std::endl;
  }
}

void runtuhkan(int baris, int kolom, Matrix &matriks) {
  for (int i = 0; i < kolom; i++) {
    std::vector<char> temp(baris, '0');
    int pos = baris - 1;
    for (int j = baris - 1; j >= 0; --j) {
      if (matriks[j][i] == '1') {
        temp[pos] = '1';
        pos--;
      }
    }
    for (int j = 0; j < baris; j++) {
      matriks[j][i] = temp[j];
    }
  }
}

int main() {
  int baris, kolom;
  std::cin >> baris >> kolom;

  Matrix matriks(baris, std::vector<char>(kolom, '0'));
  input_matriks(baris, kolom, matriks);

  while (true) {
    bool ada_baris_penuh = false;
    for (int i = 0; i < baris; i++) {
      bool penuh = true;
      for (int j = 0; j < kolom; j++) {
        if (matriks[i][j] == '0') {
          penuh = false;
          break;
        }
      }
      if (penuh) {
        ada_baris_penuh = true;
        for (int j = 0; j < kolom; j++) {
          matriks[i][j] = '0';
        }
      }
    }
    if (!ada_baris_penuh) {
      break;
    }
    runtuhkan(baris, kolom, matriks);
  }

  cetak_matriks(baris, kolom, matriks);

  return 0;
}

// todo
// cek seluruh elemen baris, apakah terisi penuh? jika ya, maka kita ubah
// menjadi 0; cek setiap elemen baris, dan cek apakah baris berikutnya dengan
// kolom yang sama terisi atau tidak? jika tidak maka pindahkan elemen ke kolom
// tersebut.
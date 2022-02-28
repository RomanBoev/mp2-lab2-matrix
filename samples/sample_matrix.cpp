
#include <iostream>
#include "utmatrix.h"

void main()
{
  int size = 0;
  std::cout << "enter size matrix: ";
  std::cin >> size;
  TMatrix<int> a(size), b(size), c(size);
  setlocale(LC_ALL, "Russian");
  cout << "" << endl;
  for (int i = 0; i < size; i++)
  {
    for (int j = i; j < size; j++)
    {
      a[i][j] = i * 10 + j;
      b[i][j] = (i * 10 + j) * 100;
    }
  }
  c = a + b;
  cout << "Matrix a = " << endl << a << endl;
  cout << "Matrix b = " << endl << b << endl;
  cout << "Matrix c = a + b" << endl << c << endl;
}

/******************************
* Обработка массивов          *
* Вариант 8                   *
* Карпов Кирилл               *
******************************/

#include <iostream>

using namespace std;

int main() {
  const int maxCount = 3;
  int countPositiveElements;
  int maxNamberString;
  int matrix[maxCount][maxCount];

  cout << "Enter the matrix elements";

  for (int rowIndex = 0; rowIndex < maxCount; ++rowIndex) {
    for (int columnIndex = 0; columnIndex < maxCount; ++columnIndex) {
      cin >> matrix[rowIndex][columnIndex];
    }
    cout << endl;
  }

  for (int rowIndex = 0; rowIndex < maxCount; ++rowIndex) {
    for (int columnIndex = 0; columnIndex < maxCount; ++columnIndex) {
      cout << matrix[rowIndex][columnIndex] << " ";
    }
    cout << endl;
  }
    
  for (int rowIndex = 0; rowIndex < maxCount; ++rowIndex) {
    countPositiveElements = 0;
    maxNamberString = matrix[rowIndex][0];

    for (int columnIndex = 0; columnIndex < maxCount; ++columnIndex) {
      if (matrix[rowIndex][columnIndex] > 0) {
        ++countPositiveElements;
      }
      if (maxNamberString < matrix[rowIndex][columnIndex]) {
        maxNamberString = matrix[rowIndex][columnIndex];
      }
    }
    cout << "line number №" << rowIndex + 1 << "the number of positive elements = " << countPositiveElements << endl;

    if (maxNamberString > 0) {
      cout << "the maximum element of the string: " << maxNamberString << "\n \n";
    } else {
      cout << "There is no maximum positive element: " << "\n \n";
    }
  }

  return 0;
}
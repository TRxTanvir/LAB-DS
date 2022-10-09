#include <iostream>
using namespace std;

int main() {
   int a[10][10], transpose[10][10];
   int row, column, i, j;

   cout << "Enter rows size : ";
    cin >> row ;
   cout << "Enter columns size: ";
    cin  >> column;

   cout << "\nEnter elements : " << endl;


   for (int i = 0; i < row; ++i) {
     for (int j = 0; j < column; ++j) {
        cout << "Enter element a" << i + 1 << j + 1 << ": ";
        cin >> a[i][j];
     }
  }

   cout << "\nEntered Row And Col : " << endl;
   for (int i = 0; i < row; ++i) {
      for (int j = 0; j < column; ++j) {
         cout << " " << a[i][j];
         if (j == column - 1)
            cout << endl << endl;
      }
   }

   for (int i = 0; i < row; ++i)
      for (int j = 0; j < column; ++j) {
         transpose[j][i] = a[i][j];
      }

   cout << "\nReverse  Array Is : " << endl;
   for (int i = 0; i < column; ++i)
      for (int j = 0; j < row; ++j) {
         cout << " " << transpose[i][j];
         if (j == row - 1)
            cout << endl << endl;
      }

   return 0;
}

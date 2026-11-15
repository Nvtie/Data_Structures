//Write a program to represent a sparse matrix using arrays

#include <iostream>
using namespace std;

int main(){

    int matrix[4][5] = {
        {0, 0, 3, 0, 0},
        {0, 0, 0, 0, 5},
        {0, 7, 0, 0, 0},
        {0, 0, 0, 9, 0}
    };

    int sparse[20][3];

    int rows = 4;
    int cols = 5;
    int count = 0;

    //store matrix dimensions and non-zero elements in sparse matrix
    sparse[0][0] = rows;
    sparse[0][1] = cols;

    //find and store non-zero elements in sparse matrix
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            if (matrix[i][j] != 0){
                count++;
                sparse[count][0] = i;
                sparse[count][1] = j;
                sparse[count][2] = matrix[i][j];
            }
        }
    }

    sparse[0][2] = count;

    //display sparse matrix
    cout << "Original Matrix: " << endl;

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    //display sparse matrix
    cout << "\nSparse Matrix: " << endl;
    cout << "Row\tCol\tValue" << endl;
    for (int i = 0; i <= count; i++){
        for (int j = 0; j < 3; j++){
            cout << sparse[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}
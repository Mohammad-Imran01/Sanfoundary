#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;
    cout << "Enter first dimen: ";
    cin >> r1 >> c1;
    cout << "Enter second dimen: ";
    cin >> r2 >> c2;

    if(c1 != r2) {
        cout << "Multiplication not possible!\n";
        return 0;
    } 

    int A[r1][c1], B[r2][c2];

    cout << "Give " << r1 << "x" << c1 << " inputs:\n";
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c1; j++) {
            cin >> A[i][j];
        }
    }
    cout << "Give " << r2 << "x" << c2 << " inputs:\n";
    for(int i = 0; i < r2; i++) {
        for(int j = 0; j < c2; j++) {
            cin >> B[i][j];
        }
    }

    cout << "\nFirst: \n";
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c1; j++) {
            cout << A[i][j] << ' ';
        }
        cout << endl;
    }
    cout << "\nSecond\n";
    for(int i = 0; i < r2; i++) {
        for(int j = 0; j < c2; j++) {
            cout << B[i][j] << ' ';
        }
        cout << endl;
    }
    
    int C[c1][r2];
    for(int i = 0; i < r1; i++) {
        for(int j  = 0; j < c2; j++) {
            C[i][j]=0;
            for(int k = 0; k < r2; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "\nResult\n";
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            cout << C[i][j] << ' ';
        }
        cout << endl;
    }
    
    
    
    return 0;

}
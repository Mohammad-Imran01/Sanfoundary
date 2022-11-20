#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int A[]{2, 5, 4, 6, 1, 7};
    sort(A, A+6);
    reverse(A, A+6);

    cout << "Prev possible permutations: \n";
    int cnt{};
    do {
        cnt++;;
        for(int i: A) cout << i << ' ';
        cout << '\n';
    } while(prev_permutation(A, A+6));

    cout << endl << endl << cnt << endl;
    return EXIT_SUCCESS;
}
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

    int A[]{3, 1, 2, 4, 5};
    int B[]{3, 2, 8, 9, 7};

    sort(A, A+5);
    sort(B, B+5);

    vector<int> v(10, 0);

    std::vector<int>::iterator it =
        set_symmetric_difference (A, A+5, B, B+5, v.begin());
    v.resize(it - v.begin());

    for(auto i: v) cout << i << ' ';


    return 0;
}
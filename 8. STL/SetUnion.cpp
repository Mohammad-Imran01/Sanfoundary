#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int A[] = {3, 4, 1, 5, 2};
    int B[] = {5, 2, 3,14, 5};
    vector<int> v(10);

    sort(A, A+5);
    sort(B, B+5);


    vector<int>::iterator it = set_union(A, A+5, B, B+5, v.begin());
    v.resize(it - v.begin());

    cout << "The set union has " << v.size() << " elements.\n";
    for(vector<int>::iterator i = v.begin(); i != v.end(); i++)
     cout << *i << ' ';
}
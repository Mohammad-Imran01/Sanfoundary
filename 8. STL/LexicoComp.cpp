#include <iostream>
#include <cctype>
#include <algorithm>
#include <cstring>
using namespace std;

bool mycomp(char c1, char c2) {
    return tolower(c1) < tolower(c2);
}

int main() {
    int f, b;
    char foo[] = "zzzzzzzAppzzzle";
    char bar[] = "baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaar";
    f = strlen(foo);
    b = strlen(bar);

    cout << boolalpha;
    cout << "Comapring lexicogally (foo, bar) "
        << "Using < : "
        << lexicographical_compare(foo, foo+f, bar, bar+b) << endl
        << "Using mycomp object: "
        << lexicographical_compare(foo, foo+f, bar, bar+b, mycomp )
        << endl;
    return 0;
}
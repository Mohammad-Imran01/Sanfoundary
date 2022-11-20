#include <iostream>
#include <array>
using namespace std;

int main() {
    array<int, 5> arr;
    array<int, 5>::iterator i;
    int ch, val, cnt{};
    arr.fill(0);

    while(1) {
        cout << "\n------------------\n" 
            << "-- Array in STL --\n"
            << "-----------------\n"
            << "1. Insert.\n"
            << "2. Size.\n"
            << "3. Front.\n"
            << "4. last element.\n"
            << "5. display.\n"
            << "6. exit.\n"

            << "Enter yr ch: ";
        cin >> ch;

        if(ch < 1 || ch > 6 ) break;

        switch(ch) {
            case 1:
                cout << "Enter an element: ";
                cin >> val;
                arr.at(cnt++) = val;
                break;
            case 2:
                cout << "Size: " << arr.size() << endl;
                break;
            case 3:
                cout << "Front element: " << arr.front() << endl;
                break;
            case 4:
                cout << "Last eleemnt: " << arr.back() << endl;
                break;
            case 5:
                for(i = arr.begin(); i != arr.end(); i++) 
                cout << *i << ' ';
                cout << '\n';
                break;
            default:
                break;
        }
    }

    return 0;
}
#include <iostream>
#include <set>
using namespace std;

int main() {
    int val{}, ch{};

    multiset<int> ms;
    multiset<int>::iterator i;

    while(1) {
        cout << "\n--------------------\n"
            << "-- Multiset --\n"
            << "-----------------------\n"
            << "1. Insert.\n"
            << "2. delete.\n"
            << "3. find an element\n"
            << "4. count elements.\n"
            << "5. Size of the multiset.\n"
            << "6. display mulitset.\n"
            << "7. exit\n";

        cout << "Enter your choice: ";
        cin >> ch;

        if(ch < 1 || ch > 6) break;

        switch(ch) {
            case 1:
                cout << "enter an element: ";
                cin >> val;
                ms.insert(val);
                break;
            case 2:
                if(ms.empty()) cout << "already empty!\n";
                else { 
                    cout << "enter the element to delete: ";
                    cin >> val;
                    ms.erase(val);
                } break;
            case 3:
                cout << "enter the element to serach: ";
                cin >> val;
                if(ms.find(val) == ms.end()) {
                    cout << "element not found!\n";
                } else {
                    cout << "Element found.\n";
                }
                break;
            case 4:
                cout << "enter element to count: ";
                cin >> val ;
                cout << "Total elements: " << ms.count(val) << endl;
                break;
            case 5:
                cout << "Size of the multiset: " << ms.size()
                    << endl;
                break;
            case 6:
                cout << "Showing the elements of the multiset: \n";
                for(i = ms.begin(); i != ms.end(); i++) {
                    cout << *i << ' ';
                } cout << '\n';
                break;
            default: 
                break;
        }

    }
}
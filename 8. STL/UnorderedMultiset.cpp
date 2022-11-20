#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_multiset<int> ums;
    unordered_multiset<int>::iterator it, i;
    int ch, val;

    while(1) {
        cout << "\n-----------------------\n"
            << "-unordered_multiset--\n"
            << "-----------------------\n"
            << "1. Insert.\n"
            << "2. delete.\n"
            << "3. find ele.\n"
            << "4. cnt element.\n"
            << "5. Check size.\n"
            << "6. Cnt # of buckets.\n"
            << "7. Buckets.\n"
            << "8. Show data.\n"
            << "9. EXIT" << endl;
        
        cout << "Give me your choice: ";
        cin >> ch;

        if(ch < 1 || ch > 8) break;

        switch(ch) {
            case 1:
                cout << "enter a val to insert: ";
                cin >> val;
                ums.insert(val);
                break;
            case 2:
                cout << "enter a val to delete: ";
                cin >> val;

                if(ums.find(val) == ums.end()) {
                    cout << val << " not exist!\n";
                } else cout << "Done!\n";
                break;
            case 3:
                cout << "enter a element: ";
                cin >> val;
                if(ums.find(val) == ums.end()) {
                    cout << val << " not exist!\n";
                } else cout << "found!\n";
                break;
            case 4:
                cout << "Enter element to cnt: ";
                cin >> val;
                cout << val << " found for " << ums.count(val) << " times!.\n";
                break;
            case 5:
                cout << "U M S size: " << ums.size() << endl;
                break;
            case 6: 
                cout << "U M S has " << ums.bucket_count()
                    << " buckets.\n";
                break;
            case 7:
                for(auto a: ums) {
                    cout << a << " is in #" << ums.bucket(a) << '\n';
                }
                cout << endl;
                break;
            case 8:
                cout << "Showing data: \n";
                for(it = ums.begin(); it != ums.end(); it++) 
                cout << (*it) << ' ';
                cout << '\n';
                break;
            default:
                break;
        }
    }
}

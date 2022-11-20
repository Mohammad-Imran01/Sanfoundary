#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq;
    int val{}, ch{}, cnt{};

    while(1) {
       cout << "\n------------------\n"
            << "-- double  queue --\n"
            << "-------------------\n"
            << "1. insert front.\n"
            << "2. insert back.\n"
            << "3. pop front.\n"
            << "4. pop rear.\n"
            << "5. display.\n"
            << "6. size.\n"
            << "7. see front.\n"
            << "8. see back.\n"

            << "Enter your choice: ";
        cin >> ch;

        if(ch < 1 || ch > 9) break;

        switch(ch) {
            case 1:
                cout << "Enter an element: ";
                cin >> val;
                dq.push_front(val);
                break;
            case 2:
                cout << "entre an element: ";
                cin >> val;
                dq.push_back(val);
                break;
            case 3:
                val = dq.front();
                dq.pop_front();
                cout << "front popped out: " << val << endl;
                break;
            case 4:
                val = dq.back();
                dq.pop_back();
                cout << "Back popped out: " << val << endl;
                break;
            case 5:
                cout << "showing data: \n";
                for(auto i = dq.begin(); i != dq.end(); i++)
                    cout << *i << ' ';
                    cout << '\n';
                break;
            case 6:
                cout << "Size is: " << dq.size() << endl;
                break;
            case 7:
                cout << "front element: " << dq.front() << endl;
                break;
            case 8:
                cout << "back element: " << dq.back() << endl;
                break;
            default:
                break;
        }
    }

    return 0;
}
#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> stk;
    int val, ch;

    while(1) {
        cout << "\n-----------\n"
             << "-- stack --\n"
             << "-----------\n"
             << "1. Push.\n"
             << "2. pop. \n"
             << "3. empty.\n"
             << "4. size.\n"
             << "5. top.\n"

            << "Enter your choice: ";
        cin >> ch;

        if(ch < 1 || ch > 6) break;

        switch(ch) {
            case 1:
                cout << "enter an element to push: ";
                cin >> val;
                stk.push(val);
                break;
            case 2:
                cout << "Top element popped out is: " 
                    << stk.top() << endl;
                stk.pop();
                break;
            case 3:
                cout << "is empty? : " << stk.empty() 
                     << endl;
                break;
            case 4:
                cout << "Stack size: " << stk.size() << endl;
                break;
            case 5:
                if(!stk.empty())
                cout << "Top element: " << stk.top() << endl;
                else cout << "No element found!\n";
                break;
            default: 
                break;            
        }
    }
}
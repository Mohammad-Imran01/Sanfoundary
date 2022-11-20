#include <iostream>
#include <forward_list>
using namespace std;

int main() {
    forward_list<int> fd_list;
    int val{}, ch{};

    while(1) {
        cout << "\n---------------------\n"
            << " -- Forward List --\n"
            << "---------------------\n"
            << "1. Insert front.\n"
            << "2. Delete front.\n"
            << "3. See front.\n"
            << "4. Resize list.\n"
            << "5. Remove all with specific values.\n"
            << "6. Remove duplicates.\n"
            << "7. Reverse list order.\n"
            << "8. Sort list.\n"
            << "9. Display list.\n"
            << "Else exit!\n"
        
        << "Enter ypur choice: ";
        cin >> ch;

        if(ch < 1 || ch > 10) break;

        switch(ch) {
            case 1:
                cout << "enter an element: ";
                cin >> val;
                fd_list.push_front(val);
                break;
            case 2:
                cout << "deleted front element: " << fd_list.front() << endl;
                fd_list.pop_front();
                break;
            case 3:
                cout << "front element is: " << fd_list.front() << endl;
                break;
            case 4:
                cout << "Enter new size: " ;
                cin >> val;
                fd_list.resize(val);
                break;
            case 5:
                cout << "Remove all values: ";
                cin >> val;
                fd_list.remove(val);
                break;
            case 6: 
                fd_list.unique();
                cout << "duplicates removed!\n";
                break;
            case 7:
                fd_list.reverse();
                cout << "List reversed!\n";
                break;
            case 8:
                fd_list.sort();
                cout << "List sorted!\n";
                break;
            case 9:
                cout << "Showing list data:\n";
                for(forward_list<int>::iterator i = 
                fd_list.begin(); i != fd_list.end(); i++) {
                    cout << *i << ' ';
                } cout << '\n';
                break;
            default:
                break;
        }
            
            
    }
}
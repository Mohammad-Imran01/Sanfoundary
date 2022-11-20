#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> LT;
    list<int>::iterator i;
    int val{}, ch{};
    while (1)
    {
        cout<<"\n---------------------"<<endl;
        cout<<"List Implementation in Stl"<<endl;
        cout<<"\n---------------------"<<endl;
        cout<<"1.Insert Element at the Front"<<endl;
        cout<<"2.Insert Element at the End"<<endl;
        cout<<"3.Delete Element at the Front"<<endl;
        cout<<"4.Delete Element at the End"<<endl;
        cout<<"5.Front Element of List"<<endl;
        cout<<"6.Last Element of the List"<<endl;
        cout<<"7.Size of the List"<<endl;
        cout<<"8.Resize List"<<endl;
        cout<<"9.Remove Elements with Specific Values"<<endl;
        cout<<"10.Remove Duplicate Values"<<endl;
        cout<<"11.Reverse the order of elements"<<endl;
        cout<<"12.Sort Forward List"<<endl;
        cout<<"13.Merge Sorted Lists"<<endl;
        cout<<"14.Display Forward List"<<endl;
        cout<<"15.Exit"<<endl;
        cout<<"Enter your Choice: ";

        cout << "Enter your choice: ";
        cin >> ch;

        if(ch > 14 || ch < 1) { break; }

        switch(ch) {
            case 1:
                cout << "enter an element: ";
                cin >> val;
                LT.push_front(val);
                break;
            case 2:
                cout << "enter to insert at end: ";
                cin >> val;
                LT.push_back(val);
                break;
            case 3:
                cout << "front deleted element: " 
                << LT.front() << '\n';
                LT.pop_front();
                break;
            case 4:
                cout << "back element " << LT.back() << " deleted\n";
                LT.pop_back();
                break;
            case 5:
                cout << "front element is: " << LT.front() << '\n';
                break;
            case 6:
                cout << "last element is: " << LT.back() << '\n';
                break;
            case 7:
                cout << "List size is: " << LT.size() << endl;
                break;
            case 8:
                cout << "enter new list size: " ;
                cin >> val;
                LT.resize(val);
                break;
            case 9:
                cout << "Which element to remove:" ;
                cin >> val;
                LT.remove(val);
                break;
            case 10:
                LT.unique();
                cout << "All elements are unique now!\n";
                break;
            case 11:
                LT.reverse();
                cout << "List reversed.\n";
                break;
            case 12:
                LT.sort();
                cout << "List sorted now.\n";
                break;
            case 13:
                continue;
            case 14:
                cout << "showing list data: \n";
                for(i  = LT.begin(); i != LT.end(); i++) {
                    cout << *i << ' ';
                } cout << '\n';
                break;
            case 15:
                exit(1);
                break;
            default:
                break;
        }
    
    }   
}
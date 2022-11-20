#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;
int main() {
    unordered_set<string> unset = 
    {"Mercury", "Venus", "Earth", "Mars",
    "Jupiter", "Saturn", "Uranus", "Neptune"};

    int ch, val;

    string s;
    cout << "\n--------------------\n" 
            << "-- unordered set --\n"
            << "---------------------\n"
            << "1. Insert.\n"
            << "2. Delete.\n"
            << "3. Find a element.\n"
            << "4. Size of the U set.\n"
            << "5. Count elements.\n"
            << "6. Cnt num of buck.\n"
            << "7. Buckets.\n"
            << "8. show Unset's data.\n"
            << "9. Exit.\n" ;
    while(1) {
        
        
        cout << "Your ch? : " ;
        cin >> ch;

        if(ch < 1 || ch > 9) break;

        switch(ch) {
        case 1:
            cout << "Entr an str to insert: "; cin >> s;
            unset.insert(s);
            break;
        case 2:
            cout << "Enter a string to delete: "; cin >> s;
            unset.erase(s);
            break;
        case 3:
            cout << "Enter str to search: ";
            cin >> s;
            if(unset.find(s) == unset.end())
              cout << "Not found!\n"; 
            else 
                cout << "Found!\n";
            break;
        case 4:
            cout << "Size of the U set: " << unset.size() << endl;
            break;
        case 5:
            cout << "Enter a str to count: ";
            cin >> s;
            cout << s << " found " << unset.count(s) << " times\n";
            break;
        case 6:
            cout << "Unset has : " << unset.bucket_count() << 
                " buckets" << endl;
            break;
        case 7:
            cout << "Total bucket: ";
            for(const string& str: unset) {
                cout << str << " is in bucket #"
                << unset.bucket(str) << endl;
            }
            break;
        case 8: 
            for(auto i = unset.begin(); i != unset.end(); i++){
                cout << (*i) << '\n';
            } 
            cout << '\n';
            break;
        
        }    
    }

}
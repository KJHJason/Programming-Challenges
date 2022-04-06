// https://codeforces.com/problemset/problem/339/A

#include <bits/stdc++.h>
using namespace std;

/* 
* from stackoverflow
* https://stackoverflow.com/questions/9277906/stdvector-to-string-with-custom-delimiter
* unmodified code below 
*/
/* template <typename T>
string join(const T& v, const string& delim) {
    ostringstream s;
    for (const auto& i : v) {
        if (&i != &v[0]) {
            s << delim;
        }
        s << i;
    }
    return s.str();
} */

string join(const vector<int> v, const string& delim) {
    ostringstream s;
    for (const auto& i : v) {
        if (&i != &v[0]) {
            s << delim;
        }
        s << i;
    }
    return s.str();
}

vector<int> get_array();
int main() {
    vector<int> number_array;
    number_array = get_array();
    sort(number_array.begin(), number_array.end());
    
    /* // debug messages
    cout<<"Size of array: "<<number_array.size()<<endl;
    for (int i = 0; i < number_array.size(); i++) {
        cout << number_array[i] << " ";
    } 
    cout << endl; */
 
    cout << join(number_array, "+") << endl;
    return 0;
}
 
vector<int> get_array() {
    cout<<"";
    string statementInput; cin>>statementInput;

    vector<int> number_array;
    stringstream ssUserInput(statementInput);
    int num;
    while (ssUserInput >> num) {
        // cout << "Number extracted: " << num << endl;
        number_array.push_back(num);
    }
    return number_array;
}

// old solution below
// #include <bits/stdc++.h>
// using namespace std;

// vector<char> get_array();
// int main() {
//     vector<char> number_array;
//     number_array = get_array();
//     sort(number_array.begin(), number_array.end());
    
//     /* // debug messages
//     cout<<"Size of array:"<<number_array.size()<<endl;
//     for (int i = 0; i < number_array.size(); i++) {
//         cout << number_array[i];
//     } */
 
//     // add a "+"" in between the array elements and make them a string
//     string number_string = "";
//     for (int i = 0; i < number_array.size(); i++) {
//         number_string += number_array[i];
//         if (i != number_array.size() - 1) {
//             number_string += "+";
//         }
//     }
//     cout<<number_string<<"\n";
//     return 0;
// }
 
// vector<char> get_array() {
//     cout<<"";
//     string statementInput; cin>>statementInput;
//     vector<char> number_array;
//     for (int i = 0; i < statementInput.length(); i++) {
//         if (isdigit(statementInput[i])) {
//             number_array.push_back(statementInput[i]);
//         }
//     }
//     return number_array;
// }
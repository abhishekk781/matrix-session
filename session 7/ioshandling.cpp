#include <iostream>
using namespace std;
int main() {
    // char a1[10];
    // cin >> a1;
    // cout << a1 << endl;

    // char a2[10];
    // cin >> a2;
    // cout << a2 << endl;;

    char arr[10];
    cin >> arr;
    cout << "cin " << cin << endl;

 
    int x;
    cin >> x;
    cout << "cin " << cin << endl;
    cin.clear();  
    cout << "cin " << cin << endl;
   //reset

    cout << "X" << arr << "X" << endl;
    cout << "X" << x << "X" << endl;

    cin >> arr ;
    cout << "cin " << cin << endl;
    cout << "X" << arr << "X" << endl;

}
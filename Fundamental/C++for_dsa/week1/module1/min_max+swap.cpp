#include <iostream>
using namespace std;
int main()

{
    int x;
    cin >> x;
    cin.ignore();
    char s[200];
    cin.getline(s, 200);
    cout << x << " " << s << endl;
    return 0;
}
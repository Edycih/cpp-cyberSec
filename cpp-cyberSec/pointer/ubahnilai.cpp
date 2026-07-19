#include <iostream>
#include <string>
using namespace std;
int main() {
    string nama = "HACKER";
    char *ptr = &nama[0];
    *(ptr + 2) = '3';
    cout<<nama<<endl;
    return 0;
}

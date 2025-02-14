#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    string city;
    cout << "Enter city: ";
    cin >> city;
    
    string command = "curl -s \"https://wttr.in/" + city + "?format=%C+%t\"";
    system(command.c_str());

    return 0;
}

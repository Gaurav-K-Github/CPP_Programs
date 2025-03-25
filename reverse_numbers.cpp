#include <iostream>
#include <string>

using namespace std;

int main() {
    int n1 = 123456;
    cout << "Before reversal: " << n1 << endl;

    string str_n1 = to_string(n1);
    string rev_n1 = ""; 
    for (int i = str_n1.length() - 1; i >= 0; i--) {
        rev_n1 += str_n1[i];
    }

    int reversedNumber = stoi(rev_n1);

    cout << "After reversal: " << reversedNumber << endl;

    return 0;
}

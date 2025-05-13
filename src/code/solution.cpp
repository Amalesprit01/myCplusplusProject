#include <iostream>
#include <sstream>
#include <vector>
#include <limits>
using namespace std;

int main() {
    string line;
    cout << "Enter numbers separated by spaces: ";
    getline(cin, line); // Read entire line

    stringstream ss(line);
    int num, maxVal = numeric_limits<int>::min();
    int index = 0, maxIndex = 0;
    vector<int> numbers;

    while (ss >> num) {
        numbers.push_back(num);
        if (num > maxVal) {
            maxVal = num;
            maxIndex = index;
        }
        index++;
    }

    if (numbers.empty()) {
        cout << "No valid numbers entered." << endl;
    } else {
        cout << "The maximum value is " << maxVal 
             << " at position " << maxIndex + 1 << "." << endl;
    }

    return 0;
}

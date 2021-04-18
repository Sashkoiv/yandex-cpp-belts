#include <iostream>
#include <vector>
#include "accessory.hpp"

using namespace std;

vector<string> PalindromFilter(vector<string> words, int minLength) {
    vector<string> result;

    for (string word : words) {
        if (word.length() >= minLength) {
            if (word == string(word.rbegin(), word.rend())) {
                result.push_back(word);
            }
        }
    }
    return result;
}

int VectorPrint(const vector<string>& input){
    for (auto i : input){
        cout << i << ", ";
    }
    cout << endl;

    return 0;
}

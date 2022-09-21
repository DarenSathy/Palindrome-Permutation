//
//  main.cpp
//  cracking1.4
//
//  Created by Daren Sathy on 8/31/22.
//

#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

bool checkPalindrom(string str) {
    vector<char> list;
    for (int i = 0; i < str.length(); i++) {
        auto pos = find(list.begin(), list.end(), str[i]);
        if (pos != list.end()) {
            auto posi = find(list.begin(), list.end(), str[i]);
            list.erase(posi);
        }
        else {
            list.push_back(str[i]);
        }
    }
    if (str.length() % 2 == 0 && list.empty()) {
        return true;
    }
    if (str.length() % 2 == 1 && list.size() == 1) {
        return true;
    }
    else {
        return false;
    }
    
}

int main() {
    
    if (checkPalindrom("narutoisnaruto")) {
        cout << ("Yes") << endl;
    }
    else {
        cout << ("No") << endl;
    }
    if(checkPalindrom("racecar")) {
        cout << ("Yes") << endl;
    }
    else{
        cout << ("No") << endl;
    }
  
    return 0;
}

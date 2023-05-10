#include <iostream>
#include <bits/stdc++.h>
int main() {
    std::string ch = "abcdefghijklmnopqrstuvwxyz";
    int key[2][2];
    std::string msg;
    std::cout << "Enter the plain text from 2 char " << std::endl;
    std::cin>>msg;
    std::cout << "Enter the key matrix 4*4 " << std::endl;
    std::cin >> key[0][0] >> key[0][1] >> key[1][0] >> key[1][1];
    int re[2];
    std::cout << "if from zero : " << std::endl;
    re[0] = (key[0][0] * (ch.find(tolower(msg[0])) )) + (key[0][1] * (ch.find(tolower(msg[1])) ));
    re[1] = (key[1][0] * (ch.find(tolower(msg[0])) )) + (key[1][1] * (ch.find(tolower(msg[1])) ));
    char sre1 = ch[(re[0] % 26) ], sre2 = ch[(re[1] % 26)];
    std::cout << sre1 << "(" << re[0] % 26 << ") , " << sre2 << "(" << re[1] % 26 << ") " << std::endl;
    std::cout << "if from one : " << std::endl;
        re[0] = (key[0][0] * (ch.find(tolower(msg[0])) + 1)) + (key[0][1] * (ch.find(tolower(msg[1])) + 1));
    re[1] = (key[1][0] * (ch.find(tolower(msg[0])) + 1)) + (key[1][1] * (ch.find(tolower(msg[1])) + 1));
    sre1 = ch[(re[0] % 26) - 1], sre2 = ch[(re[1] % 26) - 1];
    std::cout << sre1 << "(" << re[0] % 26 << ") , " << sre2 << "(" << re[1] % 26 << ") " << std::endl;
    return 0;
}

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
    re[0] = (key[0][0] * (ch.find(tolower(msg[0])) + 1)) + (key[0][1] * (ch.find(tolower(msg[1])) + 1));
    re[1] = (key[1][0] * (ch.find(tolower(msg[0])) + 1)) + (key[1][1] * (ch.find(tolower(msg[1])) + 1));
    char sre1 = ch[(re[0] % 26) - 1], sre2 = ch[(re[1] % 26) - 1];
    std::cout << sre1 << "(" << re[0] % 26 << ") , " << sre2 << "(" << re[1] % 26 << ") " << std::endl;
    return 0;
}


//#include <iostream>
//#include <bits/stdc++.h>
//int main() {
//    std::string ch = "abcdefghijklmnopqrstuvwxyz";
//    int key[2][2];
//    std::string msg;
//    std::cout << "Enter the plain text" << std::endl;
//    std::getline(std::cin, msg);
//    std::cout << "Enter the key matrix 4*4 " << std::endl;
//    std::cin >> key[0][0] >> key[0][1] >> key[1][0] >> key[1][1];
//    std::string ans = "";
//    for (int i = 0; i < msg.length()-1; i+=2) {
//        int re[2];
//        if(msg[i]==' ') {
//            i++;
//            ans+=' ';
//        }
//        std::string s="";
//        s+=msg[i] ;
//        if(msg[i + 1]==' ') {
//            i++;
//            ans+=' ';
//        }
//        s+=msg[i + 1];
//        re[0] = (key[0][0] * (ch.find(tolower(s[0])) + 1)) + (key[0][1] * (ch.find(tolower(s[1])) + 1));
//        re[1] = (key[1][0] * (ch.find(tolower(s[0])) + 1)) + (key[1][1] * (ch.find(tolower(s[1])) + 1));
//        char sre1 = ch[(re[0] % 26) - 1], sre2 = ch[(re[1] % 26) - 1];
//        ans += sre1  ;
//        ans+=sre2;
//        std::cout << sre1 << "(" << re[0] % 26 << ") , " << sre2 << "(" << re[1] % 26 << ") " << std::endl;
//    }
//    std::cout << "final answer is : " << ans << std::endl;
//    return 0;
//}

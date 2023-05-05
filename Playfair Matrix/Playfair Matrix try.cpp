#include <iostream>
#include <map>

int main() {
    std::map<char,int> mp;
    char a='a';
    for (int i = 0; i < 26; ++i) {
        mp.insert({a, 0});
        a++;
    }
    std::string ok;
    std::cout << "if using given matrix write yes if encrypt by keyword write no " << std::endl;
    std::cin>>ok;
    int matrix[5][5];
    std::string key;
    if(tolower(ok[0])=='n') {
        std::cout << "Enter the keyword" << std::endl;
        std::cin>>key;
    }
    std::cout << "Enter the massage to encrypt them" << std::endl;
    std::string msg;
    std::getline(std::cin,msg);
    if(ok=="yes"){
        for (int i = 0; i < 5; ++i) {
            for (int j = 0; j < 5; ++j) {
                std::cin>>matrix[i][j];
            }
        }
    }else{
        for (int i = 0; i < key.length(); ++i) {
            if(mp[key[0]]>=1) {
                mp[key[0]]++;
                continue;
            }
            else {

        }
    }
    std::cout <<"..."<< std::endl;
    return 0;
}
}

#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <regex>
using namespace std;

int main(int argc, char *argv[]){
    srand (time(NULL));

    string lowercase = "abcdefghijklmnopqrstuvwxyz";
    string uppercase = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string special = "!%&/()=?}][{@#*+";
    string number = "1234567890";
    string result = "";
    int length = 12;
    bool complex_password = false;

    if (argc > 3) { cout << "ERROR: Too many arguments" << endl; return 1; }
    switch (argc){
    case 2:
        if (std::regex_match(argv[1], std::regex("[1234567890]*"))) { length = atoi(argv[1]); };
        if (std::regex_match(argv[1], std::regex("-c"))) { complex_password = true; };
        break;
    case 3:
        if (std::regex_match(argv[1], std::regex("[1234567890]*"))) { length = atoi(argv[1]); };
        if (std::regex_match(argv[2], std::regex("[1234567890]*"))) { length = atoi(argv[2]); };
        if (std::regex_match(argv[1], std::regex("-c"))) { complex_password = true; };
        if (std::regex_match(argv[2], std::regex("-c"))) { complex_password = true; };
        break;
    }
    
    for (int i = 0; i < length; i++){
        int rnd = 0;
        if (complex_password) { rnd = rand() % 4; } else { rnd = rand() % 3; }
        switch (rnd){
            case 0: result = result + lowercase[rand() % lowercase.length() - 1];break;
            case 1: result = result + uppercase[rand() % uppercase.length() - 1]; break;
            case 2: result = result + number[rand() % number.length() - 1]; break;
            case 3: result = result + special[rand() % special.length() - 1]; break;
        }
    }

    cout << result << endl;
    
    return 0;
}
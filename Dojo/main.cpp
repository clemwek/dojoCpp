//
//  main.cpp
//  Dojo
//
//  Created by Clement Wekesa on 14/04/2018.
//  Copyright © 2018 Clement Wekesa. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    std::string command;
    
    std::cout << "Please enter a command." <<std::endl;

    while (command != "q") {
        std::getline(cin, command);

        std::cout << command;
    }
    
//    string str1("the brown fox jumped over the lazy dog");
//    istringstream iss(str1);
//
//    while (iss) {
//        string word;
//        iss >> word;
//        cout << word << endl;
//    }
    return 0;
}

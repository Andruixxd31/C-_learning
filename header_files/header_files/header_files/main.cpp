//
//  main.cpp
//  header_files
//
//  Created by Andres Díaz de León on 01/09/20.
//  Copyright © 2020 Andres. All rights reserved.
//

#include <iostream>
#include "Log.hpp"

using namespace std;

void Log(const char* message){
    cout << message << endl;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int a = 8;
    ++a;
    InitLog();
    Log("Hello, World!");
    return 0;
}

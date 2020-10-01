//
//  main.cpp
//  직사각형 별찍기 (LEVEL 1)
//
//  Created by Sang Ho Yoo on 2020/09/30.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int a = 5;
    int b = 3;
        for(int i=0; i<b; i++){
            for(int j=0; j<a; j++){
                std::cout << "*";
            }
            std::cout<< '\n';
        }
}

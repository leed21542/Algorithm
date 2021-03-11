//
//  main.cpp
//  하샤드 수 (LEVEL 1)
//
//  Created by Sang Ho Yoo on 2020/10/09.
//

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
    bool answer = true;
    int x = 12;
    int sum = 0;
    
    string A = to_string(x);
    
    for(int i=0; i<A.size(); i++){
        char a = A[i];
        int b = a - '0';
        sum += b;
    }
    
    if(x % sum == 0)answer = true;
    else answer = false;
    
    cout << answer <<'\n';
}

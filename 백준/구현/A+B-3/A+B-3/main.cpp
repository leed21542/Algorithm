//
//  main.cpp
//  A+B-3
//
//  Created by Sang Ho Yoo on 2020/10/14.
//

#include <iostream>
using namespace std;
int total, A, B;

int main(int argc, const char * argv[]) {
    cin >> total;
    
    for(int i=0; i<total; i++){
        cin >> A >> B;
        cout << A+B <<endl;
    }
}

//
//  main.cpp
//  평균 구하기 (LEVEL 1)
//
//  Created by Sang Ho Yoo on 2020/10/09.
//

#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

vector<int> arr = {1,2,3,4};

int main(int argc, const char * argv[]) {
    int sum = 0;
    for(int i=0; i<arr.size(); i++){
        sum += arr[i];
    }
    
    double answer = sum / arr.size();
}

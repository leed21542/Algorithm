//
//  main.cpp
//  행렬의 덧셈 (LEVEL 1)
//
//  Created by Sang Ho Yoo on 2020/09/30.
//

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
    vector<vector<int>> arr1 = {{1},{2}};
    vector<vector<int>> arr2 = {{3},{4}};
    vector<vector<int>> answer;
    vector<int> a;

        for(int i=0; i<arr1.size(); i++){
            for(int j=0; j<arr1[i].size(); j++){
                a.push_back(arr1[i][j] + arr2[i][j]);
            }
            answer.push_back(a);
        }
}

//
//  main.cpp
//  타겟 넘버
//
//  Created by Sang Ho Yoo on 2020/10/06.
//

#include <iostream>
#include <vector>

using namespace std;
vector<int> num;
vector<int> numbers = {1,1,1,1,1};
int target = 3;
int c = 0;

void dfs(int x, int sum){
    
    int sub_sum1 = sum + numbers[x];
    int sub_sum2 = sum - numbers[x];
    int dx = x;
    
    if(x == numbers.size()-1){
        if(sub_sum1 == target || sub_sum2 == target){
            c++;
            return;
        }
        else return;
    }
    dx++;
    dfs(dx,sub_sum1); //더한 부분
    dfs(dx,sub_sum2); //뺀 부
}

int main(int argc, const char * argv[]) {
    num = numbers;
    dfs(0,0);
    
    cout << c << '\n';
}

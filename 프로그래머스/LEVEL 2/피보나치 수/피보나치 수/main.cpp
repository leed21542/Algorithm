//
//  main.cpp
//  피보나치 수
//
//  Created by Sang Ho Yoo on 2020/10/07.
//

#include <iostream>
int dp[100001];

using namespace std;
int fibo(int num){
    if(num <= 1)return num;
    if(dp[num] != 0)return dp[num];
    
    dp[num] = (fibo(num-1)%1234567 + fibo(num-2) % 1234567) % 1234567;
    return dp[num];
}

int main(int argc, const char * argv[]) {
    int n = 5;
    int answer = fibo(n) % 1234567;
    
    cout << answer <<'\n';
}

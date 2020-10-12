//
//  main.cpp
//  두 배열의 원소 교체
//
//  Created by Sang Ho Yoo on 2020/10/12.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

long long N, K;
long long result = 0;

int main(int argc, const char * argv[]) {
    cin >> N >> K;
    
    vector<long long> first_box(N);
    vector<long long> second_box(N);
    
    for(int j=0; j<N; j++){
        scanf("%1d",&first_box[j]);
    }
    
    for(int j=0; j<N; j++){
        scanf("%1d",&second_box[j]);
    }
    
    sort(first_box.begin(),first_box.end()); //오름차순
    sort(second_box.begin(),second_box.end(),greater<>()); //내림차순
    
    for(int i=0; i<N; i++){
        if(i < K && (first_box[i] < second_box[i])){
            swap(first_box[i],second_box[i]);
            result += first_box[i];
        }
        else{
            result += first_box[i];
        }
    }
    
    cout << result << '\n';
}

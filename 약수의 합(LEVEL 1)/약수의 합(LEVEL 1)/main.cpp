//
//  main.cpp
//  약수의 합(LEVEL 1)
//
//  Created by Sang Ho Yoo on 2020/09/26.
//  Copyright © 2020 Sang Ho Yoo. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
    int n = 12;
    int answer = 0;
    
    for(int i=1; i<=n; i++)
    {
        if(n%i == 0)answer+=i;
    }
    return 0;
}

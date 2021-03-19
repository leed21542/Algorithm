#include <vector>
#include <iostream>

using namespace std;

vector<int> arr = {1,1,3,3,0,1,1};
vector<int> answer;
int main(int argc, const char * argv[]) {
    int before = -1;
    for(int i=0; i<arr.size(); i++)
    {
        if(before == arr[i])continue;
        answer.push_back(arr[i]);
        before = arr[i];
    }
    
    for(int i=0; i<answer.size(); i++)printf("%d ",answer[i]);
}

/* 베스트 답안
 #include <vector>
 #include <iostream>
 #include <algorithm>
 using namespace std;
 
 vector<int> solution(vector<int> arr)
 {
 
 arr.erase(unique(arr.begin(), arr.end()),arr.end());
 
 vector<int> answer = arr;
 return answer;
 }
 */

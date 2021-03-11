
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> people = {70,50,80,50};
int limit = 100;

int main(int argc, const char * argv[]) {
    
    sort(people.begin(), people.end()); //오름차순 정렬
    int answer = 0;
    
    int left = 0;
    int right = people.size()-1;
    while(right >= left){
        if(people[left] + people[right] > limit){
            answer++;
            right--; //맨 오른쪽 큰 사람은 먼저 태운다.
        }
        else{
            answer++;
            right--;
            left++;
        }
    }
    
    cout << answer;
}

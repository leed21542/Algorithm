#include <iostream>
#include <vector>

using namespace std;

vector<int> prices = {1,2,3,2,3};
vector<int> answer;

int main()
{
    for(int i=0; i<prices.size(); i++) //앞에서 부터 하나씩 비교
    {
        int j = 0;
        for(j=i; j<prices.size(); j++)
        {
            if(prices[i] > prices[j]) //가격이 내려가면
            {
                answer.push_back(j-i); //그 차이만큼 계산해서 넣는다.
                break;
            }
        }
        if(j == prices.size()) answer.push_back(j-1-i);
    }
}

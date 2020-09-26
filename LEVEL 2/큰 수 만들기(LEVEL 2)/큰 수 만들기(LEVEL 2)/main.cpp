#include <iostream>
#include <vector>
using namespace std;

string number = "1924";
string answer = " ";
int main()
{
    int k = 2;
    char max = 0;
    int position = -1;
    
    for(int j=0; j<number.length()-k; j++)
    {
        max = 0;
        for(int i=position+1; i<=k+j; i++) //첫 부분에서 제일 큰 값 선택
        {
            if(max < number[i]){
                max = number[i]; //제일 큰 값 비교해서 뽑기
                position = i; //제일 큰 값의 위치 선정, 다음에 이 위치부터 시작
            }
        }
        
        answer += max;
    }
    
}

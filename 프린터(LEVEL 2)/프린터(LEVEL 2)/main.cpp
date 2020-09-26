#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> priorities = {1,1,9,1,1,1};
int location = 0;
int answer = 0;
int c = 0; //출력 수

typedef struct{
    int front;
    int rear;
}where;

int main()
{
    vector<where> an; //구조체 벡터 정의
    for(int i=0; i<priorities.size(); i++)
    {
        where a;
        a.front = priorities[i]; a.rear = i;
        an.push_back(a);
    }
    //입력 끝
    
    for(int i=0; i<an.size(); i++)
    {
        int j = 0;
        for(j=0; j<an.size(); j++)
        {
            if(an[0].front < an[j].front) //현재 값보다 큰 값이 있다. -> 제일 뒤로
            {
                int fron = an[0].front;
                int rea = an[0].rear;
                where a;
                a.front = fron; a.rear = rea;
                an.erase(an.begin()); //제일 처음 값 삭제
                an.push_back(a); //맨 뒤에 붙인다.
                break;
            }
        }
        
        if(j == an.size()) { //제일 큰 값이다 -> 출력
            c++;
            if(an[0].rear == location){ //만약 원하는 값 출력
                answer = c;
                break;
            }
            an.erase(an.begin());//제일 앞이 제일 크니 출력
            i = -1;
        }
    }
}

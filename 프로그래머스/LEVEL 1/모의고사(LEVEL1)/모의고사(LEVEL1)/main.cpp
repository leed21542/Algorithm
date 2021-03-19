#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int>answers = {1,2,3,4,5};
int main() {
    vector<int> a1 = {1,2,3,4,5};
    vector<int> a2 = {2,1,2,3,2,4,2,5};
    vector<int> a3 = {3,3,1,1,2,2,4,4,5,5};
    vector<int> an;
    vector<int> answer;
    
    int a1_answer = 0, a2_answer = 0, a3_answer = 0;
    int c1=0, c2=0, c3=0;
    
    for(int i=0; i<answers.size(); i++)
    {
        if(c1 > a1.size()){
            c1 = 0;
        }
        if(answers[i] == a1[c1]){
            a1_answer++;
        }
        c1++;
        
        if(c2 > a2.size()){
            c2 = 0;
        }
        if(answers[i] == a2[c2]){
            a2_answer++;
        }
        c2++;
        
        if(c3 > a3.size()){
            c3 = 0;
        }
        if(answers[i] == a3[c3]){
            a3_answer++;
        }
        c3++;
    }
    
    if((a1_answer == a2_answer) && (a2_answer == a3_answer)){
        answer.push_back(1);
        answer.push_back(2);
        answer.push_back(3);
    }
    else if(a1_answer >= a2_answer){
        if(a1_answer == a2_answer){
            if(a1_answer > a3_answer)
            {
                answer.push_back(1);
                answer.push_back(2);
            }
            else if(a1_answer < a3_answer){
                answer.push_back(3);
            }
        }
        else if(a1_answer > a2_answer)
        {
            if(a1_answer >= a3_answer){
                if(a1_answer == a3_answer){
                    answer.push_back(1);
                    answer.push_back(3);
                }
                else answer.push_back(1);
            }
            else if(a1_answer < a3_answer)
            {
                answer.push_back(3);
            }
        }
    }
    else if(a1_answer < a2_answer){
        if(a2_answer > a3_answer){
            answer.push_back(2);
        }
        else if(a2_answer == a3_answer){
            answer.push_back(2);
            answer.push_back(3);
        }
        else answer.push_back(3);
    }
}

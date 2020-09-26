#include <iostream>
#include <string>
#include <vector>

using namespace std;
string skill = {"CBD"};
vector<int> check_box;
vector<string> skill_tress = {"BACDE","CBADF","AECB","BDA"};

int main() {
  
    for(int i=0; i<skill.size(); i++)
    {
        check_box.push_back(0); //체크박스를 먼저 스킬의 크기에 맞게 늘린다.
    }
    for(int i=0; i<skill_tress.size(); i++) //앞에서부터 차례대로 확인해본다.
    {
        int skill_pointer = 0;
        
        
        for(int j=0; j<skill_tress[i].size(); j++) //한글자씩 확인하는 부분
        {
            if(skill[skill_pointer] == skill_tress[i][j])
            {
                
            }
        }
    }
}

#include <string>
#include <vector>
#include<unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    int i;
    unordered_map <string, int> m;
    unordered_map <string, int> ::iterator it;
    
    for(i=0; i<participant.size(); i++)
    {
        m[participant[i]]++;
    }
    
    
    for(i=0; i<completion.size(); i++)
    {
        m[completion[i]]--;
    }
    
    for(it=m.begin(); it!=m.end(); it++)
    {
        if(it->second==1) return it->first;
    }
    
    
    
}

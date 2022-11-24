#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        vector<int>v;
        
        for(int i=0;i<sentences.size();i++){
            int count=1;
            for(int j=0;j<sentences[i].size();j++){
                // cout<<sentences[i][j];
                if(sentences[i][j]==' ')
                count++;       
            }
            // cout<<endl;
            v.push_back(count);
        }
        return *max_element(v.begin(),v.end());
    }
};
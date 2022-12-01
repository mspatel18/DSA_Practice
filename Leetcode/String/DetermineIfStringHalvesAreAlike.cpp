class Solution {
public:
    bool halvesAreAlike(string s) {
        int n=s.length();
        vector<char>v = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int a=0,b=0;
        for(int i=0;i<n/2;i++){
            for(auto x :v){
                if(s[i]==x){
                    a++;
                    // break;
                }
            }
        }
        for(int i=n/2;i<n;i++){
            for(auto x : v){
                if(s[i]==x){
                    b++;
                    // break;
                }
            }
        }
        cout<<a<<" "<<b;
        return a==b;
    }
};
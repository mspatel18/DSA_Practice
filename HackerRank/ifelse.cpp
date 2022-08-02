#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    string n_temp;
    getline(cin, n_temp);

    int i = stoi(ltrim(rtrim(n_temp)));

    // Write your code here
    if (i>=1 && i<=9) {//Code not recommended due to repeation
        if(i==1){
            cout<<"one"<<endl;
        }else if(i==2){
            cout<<"two"<<endl;
        }else if(i==3){
            cout<<"three"<<endl;
        }else if(i==4){
            cout<<"four"<<endl;
        }else if(i==5){
            cout<<"five"<<endl;
        }else if(i==6){
            cout<<"six"<<endl;
        }else if(i==7){
            cout<<"seven"<<endl;
        }else if(i==8){
            cout<<"eight"<<endl;
        }else if(i==9){
            cout<<"nine"<<endl;
        }
    }else{
        if(i%2==0){
            cout<<"even"<<endl;
        }else{
            cout<<"odd"<<endl;
        }
    }

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

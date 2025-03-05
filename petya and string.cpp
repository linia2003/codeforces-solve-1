#include<iostream>
using namespace std;
 
string toLower(string str) {
    for(char&c:str) {
        c=tolower(c);
    }
    return str;
}
 
int main() {
    string s,m;
    getline(cin,s);
    getline(cin,m);
 
    s=toLower(s);
    m=toLower(m);
 
    if(s==m) {
        cout<<"0"<<endl;
    } else if (s<m) {
        cout <<"-1"<< endl;
    } else {
        cout <<"1"<< endl;
    }
}
 

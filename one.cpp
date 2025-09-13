#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

int main()
{
   string s = "lEetcOde";
   priority_queue<char>temp;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                temp.push(s[i]);
            }
        }
        int j = 0;
        string t = s;
         for(int i=0;i<t.size();i++){
            if(t[i]=='a'||t[i]=='e'||t[i]=='i'||t[i]=='o'||t[i]=='u'||t[i]=='A'||t[i]=='E'||t[i]=='I'||t[i]=='O'||t[i]=='U'){
               t[i] = temp[j++];
            }
        }
        cout<<t;
        
}
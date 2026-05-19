#include <iostream>
#include <queue>
#include <sstream>

using namespace std;

int main()
{
    queue<int> q;
    string s;
    while (getline(cin,s)){
        if (s=="#") break;
        stringstream ss(s);
        string cmd;
        ss >>cmd;
        if(cmd =="PUSH"){
            int v;
            ss>> v;
            q.push(v);
        }
        else if (cmd =="POP"){
            if (q.empty()){
                cout<<"NULL \n";
            } else{
                cout<< q.front()<< endl;
                q.pop();
            }
        }
    }
}

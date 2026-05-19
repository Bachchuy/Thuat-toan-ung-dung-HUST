#include<iostream>
#include<sstream>
#include<stack>

using namespace std;

int main(){
    stack<int> st;
    string s;
    while(getline(cin,s)){
        stringstream ss(s);
        string cmd;
        ss >> cmd;
        if(cmd == "PUSH"){
            int data;
            ss>> data;
            st.push(data);
        }else if(cmd=="POP"){
            if (st.empty()){
                cout<<"NULL \n";
            }else{
                cout<< st.top()<<endl;
                st.pop();
            }
        }
        if (cmd=="#"){
            break;
        }
    }
    return 0;
}

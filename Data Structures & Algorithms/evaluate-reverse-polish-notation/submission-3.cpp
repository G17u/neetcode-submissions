class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int len = tokens.size();
        string tmp;
        int a, b;
        int div;
        for (int i = 0; i < len; i++) {
            tmp=tokens[i];
            if(tmp.size()==1){

                if(tmp[0]=='+'){
                    b = st.top();
                    st.pop();
                    a = st.top();
                    st.pop();
                    st.push(a+b);
                }else if(tmp[0]=='-'){
                    b = st.top();
                    st.pop();
                    a = st.top();
                    st.pop();
                    st.push(a-b);
                }else if(tmp[0]=='*'){
                    b = st.top();
                    st.pop();
                    a = st.top();
                    st.pop();
                    st.push(a*b);
                }else if(tmp[0]=='/'){
                    b = st.top();
                    st.pop();
                    a = st.top();
                    st.pop();
                    st.push(a/b);
                }else{
                    st.push(tmp[0]-'0');
                }

            }else{
                if(tmp[0]=='-'){
                    a=0;
                    for(int j=tmp.size()-1;j>0;j--){
                        a += -(tmp[j] - '0')*pow(10,tmp.size()-1-j);
                    }
                    st.push(a);
                }else{
                    a=0;
                    for(int j=tmp.size()-1;j>=0;j--){
                        a += (tmp[j] - '0')*pow(10,tmp.size()-1-j);
                    }
                    st.push(a);
                }
            }
        }
        return st.top();
    }
};

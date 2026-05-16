class Solution {
public:
    bool isValid(string s) {
        stack<int> stack;

        for(char c : s){
            if(c=='('){
                stack.push(1);
            }else if(c==')'){
                if(stack.empty() || stack.top()!=1) return false;
                else stack.pop();
            } else if(c=='['){
                stack.push(2);
            }else if(c==']'){
                if(stack.empty() || stack.top()!=2) return false;
                else stack.pop();
            }else if(c=='{'){
                stack.push(3);
            }else if(c=='}'){
                if(stack.empty() || stack.top()!=3) return false;
                else stack.pop();
            }
        }
        if(stack.empty()) return true;
        else return false;
    }
};

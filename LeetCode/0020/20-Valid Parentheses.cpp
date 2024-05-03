class Solution {
public:
    bool isValid(string s) {
        stack<char> mark;
        for(int i = 0; i < s.size(); i ++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                mark.push(s[i]);
            }else{
                if(s[i] == ')'){
                    if(mark.empty()){
                        return false;
                    }else{
                        char c = mark.top();
                        if(c != '('){
                            return false;
                        }else{
                            mark.pop();
                        }
                    }
                }else if(s[i] == '}'){
                    if(mark.empty()){
                        return false;
                    }else{
                        char c = mark.top();
                        if(c != '{'){
                            return false;
                        }else{
                            mark.pop();
                        }
                    }
                }else if(s[i] == ']'){
                    if(mark.empty()){
                        return false;
                    }else{
                        char c = mark.top();
                        if(c != '['){
                            return false;
                        }else{
                            mark.pop();
                        }
                    }
                }
            }
        }

        if(mark.empty()){
            return true;
        }else{
            return false;
        }
        
    }
};
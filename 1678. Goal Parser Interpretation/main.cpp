class Solution {
public:
    string interpret(string command) {
        string res;
        int n = command.size();
        for(int i = 0 ; i < n ; i++){
            if(command[i] == 'G') res += 'G';
            if(command[i] == '('){
                if(command[i + 1] == ')') res += 'o';
                else if(command[i + 1] == 'a' && command[i + 2] == 'l' && command[i+3] == ')')
                    res += "al" ;
            }
            
        }
        return res;
    }
};

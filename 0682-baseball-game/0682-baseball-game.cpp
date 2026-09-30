class Solution {
public:
    int calPoints(vector<string>& op) {
        stack<int> rec;
        for(string ch : op){
            if(ch == "C"){
                rec.pop();
            }else if(ch == "D"){
                rec.push(2 * rec.top());
            }else if(ch == "+"){
                int x = rec.top();
                rec.pop();
                int y = rec.top();
                rec.push(x);
                rec.push(x + y);
            }else{
                rec.push(stoi(ch)); 
            }
        }
        int sum = 0;
        while(!rec.empty()){
            sum = sum + rec.top();
            rec.pop();
        }
        return sum;
        
    }
};
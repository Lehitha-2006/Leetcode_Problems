class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> record;
        
        for(string op : operations){
            if(op == "C"){
                record.pop_back();
            }
            else if(op == "D"){
                record.push_back(record.back()*2);  //record.last() - Get last element
            }
            else if(op == "+"){
                int n = record.size();
                record.push_back(record[n-1]+record[n-2]); 
            }
            else{
                record.push_back(stoi(op));
            }
        }

        int sum = 0;
        for(int x : record){
            sum += x;
        }
        return sum;
    }
};
class Solution{
public:
    struct Compare {
        bool operator()(const string& a, const string& b) const {
            return (a + b) < (b + a);
        }
    };
    
    string printLargest(int n, vector<string> &arr) {
        priority_queue<string, vector<string>, Compare> pq;
        string str = "";

        for(auto it : arr){
            pq.push(it);
        }

        while(!pq.empty()){
            str += pq.top();
            pq.pop();
        }

        return str;
    }
};

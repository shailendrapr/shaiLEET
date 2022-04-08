class KthLargest {
private:
    int k;
    priority_queue<int, vector<int> , greater<int>> pq;
    
public:
    KthLargest(int k, vector<int>& nums) {
        this -> k = k;
        for(auto x : nums){
            pq.push(x);
            if(pq.size() > k)
                pq.pop();
        }
    }
    
    int add(int val) {
        pq.push(val);
        if(pq.size() > k) pq.pop();
        return pq.top();
    }
};
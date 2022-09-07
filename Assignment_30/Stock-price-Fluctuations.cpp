class StockPrice {
public:
    unordered_map<int,int>mp;//timestamp as a key and price as value
    int currentTime = 0;
    multiset<int>s; //insert price
   
    StockPrice() {
        
    }
    
    void update(int timestamp, int price) {
        if(mp.find(timestamp)!=mp.end()){
            auto it = s.find(mp[timestamp]);
            s.erase(it);
        }
        mp[timestamp]=price;
        s.insert(price);
        currentTime = max(timestamp, currentTime);
    }
    
    int current() {
        return mp[currentTime];
    }
    
    int maximum() {
        auto it = s.end();
        return *(--it);
    }
    
    int minimum() {
        return *s.begin();
    }
};

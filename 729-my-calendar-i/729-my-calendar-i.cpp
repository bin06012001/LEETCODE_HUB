class MyCalendar {
public:
    
    map<int,int> calendar;
    
    
    MyCalendar() {
        
    }
    
    bool book(int s, int e) {
        auto next = calendar.upper_bound(s);
        if(next != calendar.end() && (*next).second < e)
          return false;
        calendar.insert({e,s});
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */
class BrowserHistory {
public:
   int i, sz;
    unordered_map<int, string> m;
    BrowserHistory(string homepage) {
        m[0] = homepage;
        i = 0;
        sz = 1;
    }
    
    void visit(string url) {
        i++;
        m[i] = url;
        sz = i + 1;
    }
    
    string back(int steps) {
        if (i - steps < 0) i = 0;
        else i -= steps;
        return m[i];
    }
    
    string forward(int steps) {
        if (i + steps < sz) i += steps; 
        else i = sz - 1;
        return m[i];
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */

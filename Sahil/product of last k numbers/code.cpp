class ProductOfNumbers {
public:
    vector<int> p;
    ProductOfNumbers() {
        p={1};
    }
    
    void add(int num) {
        if(num==0)
        {
            p.clear();
            p.push_back(1);
        }
        else
        {
            p.push_back(p[p.size()-1]*num);
        }
    }
    
    int getProduct(int k) {
        if(k>=p.size())
            return 0;
        return p[p.size()-1]/p[p.size()-1-k];
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */
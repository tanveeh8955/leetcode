class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int,greater<int>>s;

        for(int num:nums){
            s.insert(num);
            if(s.size()>3){
                s.erase(*s.rbegin());
            }
        }
        if(s.size() == 3){
            return *s.rbegin();
        }
        return *s.begin();
        
    }
};
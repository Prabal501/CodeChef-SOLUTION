class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        
        vector<string> res;
        
        if(nums.size() == 0) return res;
    
        
        int start = nums[ 0 ];
        
        int end = nums[ 0 ];
        
        for(int i = 1; i < nums.size() ; i++)
        {
            if(end + 1 == nums[i]){
                end = nums[ i ];
            }
            else{
                string a = "";
                if(start != end)
                {
                     a = to_string(start);
                    a += "->";
                    a += to_string(end);
                }
                else{
                    a += to_string(start);
                }
                res.push_back( a );
                
                start = nums[ i ];
                end = nums[ i ];
            }
        }
        
        string a = "";
        
        if(start != end)
        {
                     a = to_string(start);
                    a += "->";
                    a += to_string(end);
                   res.push_back(a);
       }
        else{
                    a += to_string(start);
            res.push_back(a);
          }
    
        return res;
    }
};
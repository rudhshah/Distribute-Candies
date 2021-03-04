class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int max_candy = (int)candyType.size()/2;
        int new_candy = 1;
        sort(candyType.begin(), candyType.end());
        int prev = candyType[0];
        int curr = candyType[0];
        for(int i =1; i < (int)candyType.size(); i++){
            curr= candyType[i];
            if(prev==curr){
                continue;
            }
            else{
                if(new_candy >= max_candy){
                    break;
                }
                new_candy++;
            }
            prev = curr;
            
        }
        return new_candy;
    }
};

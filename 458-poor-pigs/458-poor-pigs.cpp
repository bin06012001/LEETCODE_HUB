class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        int numIntervals = minutesToTest/minutesToDie+1;
        
        if(buckets==1)
        return 0;
    
    
    int numStatesPossible=numIntervals;
    int pig=1;
    while(pig<32 && numStatesPossible<buckets){
        numStatesPossible = numStatesPossible*numIntervals;
        pig++;
    }
    return pig;
    }
};
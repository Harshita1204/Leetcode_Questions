class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        int s1 = words1.size();
        int s2 = words2.size();
        int Actualcount = 0;
        for(int i= 0;i<s1;i++){
            int count1 = 0;
            int count2 = 0;
            for(int j= 0;j<s1;j++){
                if(words1[i]==words1[j]){
                    count1++;
                }
            }
                for(int j=0;j<s2;j++){
                    if(words1[i]==words2[j]){
                        count2++;
                    }
                }
                if(count1==1 && count2 ==1){
                    Actualcount++;
                }

            }
        return Actualcount;
    }
      
};
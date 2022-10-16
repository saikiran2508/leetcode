class Solution {
public:
    bool sumOfNumberAndReverse(int num) {
        if(num == 0) return true;
        for(int i = 1; i < num; i++){
            int n1 = i;
            int n2 = i;
            int rev = 0, rem = 0;
            while(n2){
                rem = n2%10;
                rev = rev*10 + rem;
                n2/=10;
            }
            if(rev+n1 == num) return true;
        }
        return false;
    }
};

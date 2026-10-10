class Solution {
public:
    bool checkGoodInteger(int n) {
        int digitSum=0;
        int squareSum=0;
        while(n>0){
            int num=n%10;
            digitSum=num+digitSum;
            squareSum+=num*num;
            n=n/10;
        }
        if(abs(digitSum-squareSum)>=50){
            return "true";
        }
        return false;
    }
};
class Solution {
public:
    int hammingDistance(int x, int y) {
        string num1="";
        string num2="";
        int count=0;
        while(x>0){
            int digit=x%2;
            x/=2;
            num1+=('0'+digit);
        }
        while(y>0){
            int digit=y%2;
            y/=2;
            num2+=('0'+digit);
        }
        int n=max(num1.size(),num2.size());
        while(num1.size()<n) num1+='0';
        while(num2.size()<n) num2+='0';
        for(int i=0;i<n;i++){
            if(num1[i]!=num2[i]) count++;
        }
        return count;
    }
};
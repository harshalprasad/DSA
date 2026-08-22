class Solution {
public:
    bool checkDivisibility(int n) {

        int sum = 0;
        int multi = 1;
        int x = n;

        while(n>0)
        {
            int remi = n%10;
            sum += remi;
            multi *= remi;
            n= n/10;
        }

        if(x%(sum+multi) == 0)
        return true;
        else
        return false;
        
    }
};
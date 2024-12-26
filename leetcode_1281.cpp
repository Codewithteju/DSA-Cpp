class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod=1;
        int sum=0;
        while(n!=0){

            int rem=n%10; //TO get the last number, we need to do modulus division by 10
            prod=prod*rem;
            sum+=rem;
            n=n/10; //to remove last number, we need to divide by 10
        }

        int result=prod-sum;
        return result;
    }
};
class Solution {
public:
    int curr=0;
    int prev=0;
    int prevnext=1;

    int fib(int n) {
        if(n<=0)
        {
            return 0;
        }
        else if(n==1)
        {
            return 1;
        }
        
        curr=prev+prevnext;
        prev=prevnext;
        prevnext=curr;

        if(n>2)
        {
            fib(n-1);
        }

        return curr;
    }
};
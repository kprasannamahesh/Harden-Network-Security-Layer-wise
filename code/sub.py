class Solution:
    def factorial(self, N):
        #code here
        f=1
        fact=[]
        for i in range(1,N+1):
            f=f*i
        fact=list(str(f))
        return fact
if __name__=='__main__':
    t=int(input())
    for _ in range(t):
        N=int(input())
        ob=Solution()
        ans=ob.factorial(N)
        for i in ans:
            print(i,end="")
        print()

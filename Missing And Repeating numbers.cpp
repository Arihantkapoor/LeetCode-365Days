//Question link: - https://www.codingninjas.com/codestudio/problems/873366?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	int xor1 = 0;
    for(int i = 0;i<n;i++) xor1 = xor1^arr[i];
    for(int i = 1;i<=n;i++) xor1 = xor1^i;
    int sb = xor1 & ~(xor1-1);
    int x = 0, y = 0;
    for(int i = 0;i<n;i++){
        if(sb&arr[i]){
            x = x ^ arr[i];
        }
        else{
            y = y ^ arr[i];
        }
    }
    
    for(int i = 1;i<=n;i++){
        if(sb&i) x = x^i;
        else y = y ^ i;
    }
    
    int x_cnt = 0;
    for(int i = 0;i<n;i++){
        if(arr[i]==x){
            x_cnt++;
        }
    }
    if(x_cnt!=0) return {y,x};
    return {x,y};
}

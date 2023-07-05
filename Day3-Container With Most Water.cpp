class Solution {
public:
    int maxArea(vector<int>& height) {
        int size=height.size();
 int ans=0;      
int i=0;
int j=size-1;
int temp=0;
while(i<=j){
    temp =min(height[i],height[j])*(j-i);
    ans=max(ans,temp);
    if(height[i]<height[j]){
        i++;
    }
    else{
        j--;
    }
    
     ans=max(ans,temp);

}
return ans;
    }
};
class Solution {
public:
    int lowerBound(vector<int>& arr,int x){
        int start=0, end=arr.size()-1;
        int ans=end;
        
        while(start<=end){
            int mid = start+(end-start)/2;
            // maybe an answer
            if(arr[mid]>=x){
                ans=mid;
                //look for smaller index on the left
                end=mid-1;
            }
            else if(arr[mid]<x){
                start=mid+1; // look on the right
            }
            else{
                end=mid-1;
            }
        }
        return ans;
    }
    
    vector<int> binarySearchMethod(vector<int>& arr, int k, int x){
        int h=lowerBound(arr,x);
        int l=h-1;
        while(k--){
            if(l<0){
                h++;
            }
            else if(h>=arr.size()){
                l--;
            }
            else if(x-arr[l]>arr[h]-x){
                h++;
            }
            else{
                l--;
            }
        }
        return vector<int>(arr.begin()+l+1,arr.begin()+h);
    }
    
    
    vector<int> twoPointer(vector<int>& arr, int k, int x) {
        int n=arr.size();
        int l=0;
        int h=n-1;
        
        while(h-l>=k){
            if(x-arr[l]>arr[h]-x){
                l++;
            }
            else{
                h--;
            }
        }
        // vector<int>ans;
        // for(int i=l;i<=h;i++){
        //     ans.push_back(arr[i]);
        // }
        // return ans;
        
        return vector<int>(arr.begin()+l,arr.begin()+h+1);
    }
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        // return twoPointer(arr,k,x);
        return binarySearchMethod(arr,k,x);
    }
};
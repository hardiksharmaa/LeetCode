class Solution {
    public int findKthPositive(int[] arr, int k) {
        int n=arr.length;
       int max=arr[n-1];
       int count=0;
       List<Integer>list=new ArrayList<>();
       for(int x:arr)list.add(x);
       for(int i=1;i<=max+1;i++){
        if(!list.contains(i)){
            count++;
            if(count==k){
                return i;
            }
        }
       }
       if(count==1)return arr[n-1]+k;
       return arr[n-1]+k-count+1;
    }
}
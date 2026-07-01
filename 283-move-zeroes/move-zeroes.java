class Solution {
    public void moveZeroes(int[] arr) {
        int n = arr.length;
        int k = 0;
        int count =0;
        for(int i = 0; i < n; i++){
            if(arr[i]!=0){
                arr[k++]= arr[i];
            }else{
                count++;
            }
        }
        for(int i = 0 ; i < count; i++){
            arr[k] = 0;
            k++;
        }

        
    }
}
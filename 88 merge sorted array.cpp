class Solution {
    public static void merge(int[] nums1, int m, int[] nums2, int n) {
        int p1 = m -1; //pointer for nums1, last valid element
        int p2 = n -1; //pointer for nums2 last element
        int p3 = m +n -1; //pinter for last position in nums1
        // traverse from back and merge

        while(p1 >= 0 && p2 >= 0){
            if(nums1[p1]> nums2[p2]){
                nums1[p3] = nums1[p1]; //place nums1's element
                p1--;
            }else {
                nums1[p3] = nums2[p2];
                p2--;
            }
            p3--;
        }
        while (p2 >= 0){
            nums1[p3] = nums2[p2];
            p2--;
            p3--;
        }
    }
    public static void main (String [] args){
        int [] nums1 = {1,3,5,0,0,0};
        int [] nums2 ={2,4,6};
        int m = 3, n = 3;

        merge(nums1,m,nums2,n);

        //output the merge array
        System.out.println("Merged aryya");
        for(int num : nums1){
            System.out.println( num +" ");
        }
    }
}

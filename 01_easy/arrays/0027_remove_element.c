 /* int removeElement(int* nums, int numsSize, int val) {

    for (int i = 0; i < numsSize; i++) {

        if (nums[i] == val) {

            for (int j = i; j < numsSize - 1; j++) {
                nums[j] = nums[j + 1];
            }

            numsSize--;
            i--;
        }
    }

    return numsSize;
    } */ // brute force method now i have learn two pointers method i will use that to solve this

 int removeElement(int* nums, int numsSize, int val) {
     int k = 0;
     for (int i = 0; i< numsSize ; i++){
         if (nums[i] != val){
             nums[k]=nums[i];
             k++;
         }
     }
     return k;
 }

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {

    while (n > 0) {
        if ((m > 0) && (nums1[m - 1] >= nums2[n - 1])) {
            nums1[m + n - 1] = nums1[m - 1];
            m--;
        }
        else {
            nums1[m + n - 1] = nums2[n - 1];
            n--;
        }
    }
}
 
#include <stdio.h>
 
// Hàm tìm ki?m nh? phân s? d?ng gi?i thu?t d? quy
int binarySearch(int arr[], int l, int r, int x) {
  if (r >= l) {
    int mid = l + (r - l) / 2; // Tuong duong (l+r)/2 nhung uu di?m tránh tràn s? khi l,r l?n
 
    // N?u arr[mid] = x, tr? v? ch? s? và k?t thúc.
    if (arr[mid] == x)
      return mid;
 
    // N?u arr[mid] > x, th?c hi?n tìm ki?m n?a trái c?a m?ng
    if (arr[mid] > x)
      return binarySearch(arr, l, mid - 1, x);
 
    // N?u arr[mid] < x, th?c hi?n tìm ki?m n?a ph?i c?a m?ng
    return binarySearch(arr, mid + 1, r, x);
  }
 
  // N?u không tìm th?y
  return -1;
}
 
int main(void) {
  int arr[] = {0,1,2,3,9,10};
  int n = sizeof(arr) / sizeof(arr[0]);
  int x = 5;
  int result = binarySearch(arr, 0, n - 1, x);
  if (result == -1)
    printf("%d xuat hien tai chi so %d", x, result);
  else
    printf("%d xuat hien tai chi so %d", x, result);
  return 0;
}

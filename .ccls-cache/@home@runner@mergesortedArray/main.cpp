#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
              int s = m + n - 1;
		//pointing to m-1 Index of nums1 
        int p1 = m - 1;
		//pointing to last Index of nums2
        int p2 = n - 1;
		
        while (p1>=0 && p2>=0)
        {
            if (nums2[p2] >= nums1[p1])
            {
                nums1[s] = nums2[p2];
                p2--;
            }
            else
            {
                nums1[s] = nums1[p1];
                p1--;
            }
            s--;
        }
        while (p2>=0)
        {
            nums1[s] = nums2[p2];
            p2--;
            s--;
        }
        while (p1>=0)
        {
            nums1[s] = nums1[p1];
            p1--;
            s--;
        }
    }

int main() {
  vector<int> arr1[] = {1,2,3};
  vector<int> arr2[] = {2,5,6};
  cout << "Before merge:" << endl;
  for (int i = 0; i < 3; i++) {
    cout << arr1[i] << " ";
  }
  cout << endl;
  for (int i = 0; i < 3; i++) {
    cout << arr2[i] << " ";
  }
  cout << endl;
  merge(arr1, 3,arr2, 3);
  cout << "After merge:" << endl;
  for (int i = 0; i < 6; i++) {
    cout << arr1[i] << " ";
  }

}
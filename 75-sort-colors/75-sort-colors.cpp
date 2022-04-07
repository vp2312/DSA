class Solution {
public:
    void sortColors(vector<int>& a) {
        int n= a.size();
        int lo = 0; 
        int hi = n- 1; 
        int mid = 0; 

        while (mid <= hi) { 
            switch (a[mid]) { 

            // If the element is 0 
            case 0: 
                swap(a[lo++], a[mid++]); 
                break; 

            // If the element is 1 . 
            case 1: 
                mid++; 
                break; 

            // If the element is 2 
            case 2: 
                swap(a[mid], a[hi--]); 
                break; 
            }
        }
        
    }
};
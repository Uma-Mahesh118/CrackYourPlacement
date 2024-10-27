typedef long long ll;
class Solution {
  public:
    int students(int arr[], int n, ll maxP) {
        int st =1;
        ll pages =0;
        for(int i=0; i<n; i++) {
            if((ll)pages+arr[i] <= maxP) pages+= (ll)arr[i];
            else   st++, pages = arr[i];
        }
        return st;
    }
    long long findPages(int n, int arr[], int m) {
        if(m > n) return -1;
        long long l = arr[0], r = 0;
        for(int i=0; i<n; i++) {
            l = max(l, (ll)arr[i]);
            r += (ll) arr[i];
        }
        
        while(l<=r) {
            ll mid = (l+r)/2;
            int st = students(arr, n, mid);
            
            st > m ? l = mid+1 : r = mid-1;
        }
        return l;
    }
};

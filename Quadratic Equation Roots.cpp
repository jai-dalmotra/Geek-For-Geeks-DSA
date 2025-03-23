//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) {
        if(a==0)
        {
            return {-1,-1};
        }
        
        double d=b*b-4*a*c;
        if(d<0)
        {
            return {-1};
            
        }
        
        
            int x1=floor((-b+sqrt(d))/(2.0*a));
            int x2=floor((-b-sqrt(d))/(2.0*a));
            
            return {max(x1,x2),min(x1,x2)};
        
    }
};


//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b, c;
        cin >> a >> b >> c;
        Solution ob;
        vector<int> roots = ob.quadraticRoots(a, b, c);
        if (roots.size() == 1 && roots[0] == -1)
            cout << "Imaginary";
        else
            for (int i = 0; i < roots.size(); i++) cout << roots[i] << " ";
        cout << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends


class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {

        vector<int> c;
        int i = 0;
        int j = 0;


        int a_end = a.size();
        int b_end = b.size();

        int n = a_end + b_end;

        while(i < a_end && j < b_end){

            if(a[i] < b[j]){
                c.push_back(a[i]);
                i++;
            }
            else{
                c.push_back(b[j]);
                j++;
            }   
        }

        while(i < a_end){
            c.push_back(a[i]);
            i++;
        }

        while(j < b_end){
            c.push_back(b[j]);
            j++;
        }

        // for(auto it : c){
        //     cout << it << " ";
        // }



        int ind = 0;
        float cal = 0;

        if(n % 2 != 0){
            ind = ((n + 1) / 2) - 1;
            cal = c[ind];
        }
        else{


            

            cal = (c[(n / 2) - 1] + c[n / 2]) / 2.0;

            cout << cal;
        }

        return cal;

        
    }
};
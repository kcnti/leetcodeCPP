class Solution {
public:
    int subtractProductAndSum(int n) {
        int pod=1,sod=0;
        int lenint = to_string(n).length();
        int arr[lenint];
        for(int i=0;i<lenint;i++){
            arr[i] = n%10;
            n/=10;
        }
        for(int i=0;i<lenint;i++){
            pod*=arr[i];
            sod+=arr[i];
        }
        return pod-sod;
    }
};

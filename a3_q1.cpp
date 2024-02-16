 int peakElement(int arr[], int n)
    {
        int max=arr[0];
        for(int i=0;i<n;i++){
            if(max<arr[i]){
                max=arr[i];
            }
        }
        for(int i=0;i<n;i++){
            if(max==arr[i]) return i;
        }
       // Your code here
       return 0;
    }

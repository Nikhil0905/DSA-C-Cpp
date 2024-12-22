void maxHeapify(int arr[], int n, int i) {
    int larg = i;
    int l = 2*i +1;
    int r = 2*i +2;
    
    if(l<n && arr[l] > arr[larg]) larg = l;
    if(r<n && arr[r] > arr[larg]) larg = r;
    if(larg != i){
        swap(arr[i], arr[larg]);
        maxHeapify(arr,n,larg);
    }
}

void buildMaxHeap(int arr[], int n) {
    for(int i= n/2 -1 ;i>=0;i--)
        maxHeapify(arr,n,i);
    
}
void deleteKey(int arr[], int &n, int i){
    swap(arr[i], arr[n - 1]);
    n--;
    maxHeapify(arr,n,i);
}


void deleteMinFromMaxHeap(int arr[], int &n) {
    int min = arr[0];
    for(int i = 0; i<n;i++){
        if(arr[i] < min) min =arr[i];
    }
    
    for(int i= 0; i<n;i++){
        if(arr[i] == min){
            deleteKey(arr,n,i);
            i--;
        }
    }
    
}

void printHeap(const int arr[], int n) {
   for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
   }
   cout<<endl;
    
}
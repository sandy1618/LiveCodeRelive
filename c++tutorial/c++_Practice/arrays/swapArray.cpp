#include<bits/stdc++.h>
using namespace std;
void swapElements(int arr[], int N){
    for (int i=0;i+2<N;i++){
            int temp = arr[i];
            try {
                arr[i] = arr[i+2];
                arr[i+2] = temp;
            }
            catch (...){
                cout << "exception occured." << endl;
            }        
    }

}

void printArr(int arr[], int N ){
    for(int i = 0;i<N;++i){
        cout << arr[i];
    }
    cout << endl;
}
int main(){
    int T;
    int N;
    cin >> T;
    while (T--){
        cin >> N ; 
        int arr[N]{};
        for (int i=0;i<N;i++){
            cin >> arr[i];
        }
        swapElements(arr,N);
        printArr(arr,N);
    }
    return 0;
}
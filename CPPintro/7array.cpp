#include <iostream>

using namespace std;

//1D
void takeItIn(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
}

void pullOut(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

//2D

void take2D(int arr[][2], int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin >> arr[i][j];
        }
    }
}

void out2D(int arr[][2], int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {

    // int a, b, c, d, e;
    // cin >> a >> b >> c >> d >> e;
    // cout << a << b << c << d << e; 

    int num[5];
    cin >> num[0] >> num[1] >> num[2] >> num[3] >> num[4];
    // cout << num[4];

    // int n=5;
    // cin >> n;
    // int arr[n];  //so in standard cpp variable length arrays are not allowed
    
    int arr[5];
    takeItIn(arr, 5);
    // pullOut(arr, 5);

    //2D
    int array[2][2];
    take2D(array, 2);
    out2D(array, 2);


    return 0;
}
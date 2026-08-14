#include <iostream>
using namespace std;

int main() {
    int arr[7] = {2,6,8,9,2,8,7};
    int brr[7] = {1,6,5,9,2,4,3};

    for(int i = 0; i < 7; i++) {
        for(int j = 0; j < 7; j++) {

            if(arr[i] == brr[j]) {
                cout << arr[i] << " ";
                break;
            }
        }
    }

    return 0;
}
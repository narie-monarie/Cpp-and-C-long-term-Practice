#include <iostream>
#include <string>
using namespace std;

int main() {
    int arr[] = {11,43,65,2,345,8,353,65};
    int jaipur = sizeof(arr)/sizeof(arr[0]);
    int maximum = arr[0];
    for(int i = 0 ; i < jaipur; i++) {
        if(arr[i] > maximum) {
		maximum = arr[i];
        }
    }
    cout<<maximum;
}


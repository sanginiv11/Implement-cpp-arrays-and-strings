#include<iostream>
using namespace std;

int main() {
    int arr[5], sum = 0;
    float avg;
    cout << "Enter 5 integers: ";
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    avg = sum / 5.0;
    cout << "Sum of array elements: " << sum << endl;
    cout << "Average of array elements: " << avg << endl;
    return 0;

}

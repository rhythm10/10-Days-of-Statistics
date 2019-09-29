#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
    int n,i;
    float sum=0,total=0;
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
        sum+=arr[i];
    }
    float mean = sum / n;
    for(i=0;i<n;i++)
    {
        total += (arr[i] - mean) * (arr[i] - mean);
    }
    cout << fixed << setprecision(1) << sqrt(total / n);


}

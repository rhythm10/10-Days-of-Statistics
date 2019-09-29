#include <cmath>
#include <cstdio>
#include <iomanip>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int n,a[10000];
    
    cin >> n;

    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }

    double mean = 0;

    for(int i=0;i<n;i++)
    {
        mean = mean + a[i];
    }
    mean = mean / n;
    cout << fixed;
    cout << setprecision(1);
    cout << mean << "\n";

    sort(a,a+n);
    double median = 0;
    if( n % 2 != 0)
    {
        median = double(a[n/2]);
        cout << median;
    }
    else
    {
        median = (a[(n-1)/2] + a[n/2])/2.0;
        cout << median;
    }
    cout << endl;

  
    
int number = a[0];
int mode = number;
int count = 1;
int countMode = 1;

for (int i=1; i<n; i++)
{
    if (a[i] == number) 
    {
        count++;
    }
    else
    {
        if (count > countMode) 
        {
            countMode = count;
            mode = number;
        }
        count = 1;
        number = a[i];
    }
} 

    cout << mode;
}

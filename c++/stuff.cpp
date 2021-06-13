#include <vector>
#include <iostream>
#include <numeric>

using namespace std;

int main()
{
    vector <float> v1(5);
    vector <float> v2 = { 0,5,0.5,2.3,4.7 };
    float input, avg, sum;

    cout << "Number to put into vector> \n";
    cin >> input;

    fill(v1.begin(), v1.end(), input);
    for (unsigned i = 0; i < v1.size(); ++i) {
        v1[i] = v1[i] + v2[i];
    }

    auto n = v1.size();
    sum = accumulate(v1.begin(), v1.end(), 0.0);
    avg = sum / n;

    cout << "sum:" << sum << "\n";
    cout << "average:" << avg << "\n";

    return 0;
}
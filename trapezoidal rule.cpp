#include <bits/stdc++.h>

using std::cout;
using std::cin;
using std::vector;

float mathFunction(float x){
    return log(x)/x;
}

int main(){
    float upperBoundary;
    cin >> upperBoundary;
    float lowerBoundary;
    cin >> lowerBoundary;
    float n;
    cin >> n;
    float h = (upperBoundary - lowerBoundary) / n;

    vector<float> y;

    for(float i = lowerBoundary; i <= upperBoundary; i+=h)
    {
        cout << mathFunction(i) << '\n';
        y.push_back(mathFunction(i));
    }

    float firstValue = y[0];
    float lastValue = y[y.size()];

    cout << firstValue << '\n' << lastValue << '\n';

    float sum = 0;
    for(int i = 1; i < y.size()-1 ; i++ )
    {
        sum+=y[i];
    }

    float answer = (h/2.0)*((firstValue + lastValue) +  (2*sum));
    cout << answer << '\n';
    system("pause");
}

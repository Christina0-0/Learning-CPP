#include <iostream>
using namespace std;

int main()
{
    int weight_A = 0;
    int weight_B = 0;
    int weight_C = 0;

    cout << "请输入A小猪的体重: " << endl;
    cin >> weight_A;

    cout << "请输入B小猪的体重: " << endl;
    cin >> weight_B;

    cout << "请输入C小猪的体重: " << endl;
    cin >> weight_C;

    cout << "A小猪的体重为: " << weight_A << endl;
    cout << "B小猪的体重为: " << weight_B << endl;
    cout << "C小猪的体重为: " << weight_C << endl;

    int max = weight_A;

    if (weight_B > max)
    {
        max = weight_B;
    }
    if (weight_C > max)
    {
        max = weight_C;
    }

    if (max == weight_A)
    {
        cout << "A小猪是最重的" << endl;
    }
    else if (max == weight_B)
    {
        cout << "B小猪是最重的" << endl;
    }
    else
    {
        cout << "C小猪是最重的" << endl;
    }
    return 0;
}
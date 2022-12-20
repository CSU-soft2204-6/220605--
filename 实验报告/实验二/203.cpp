#include<iostream>
using namespace std;
int main()
{
    float a, b, c, s;
    cout<<"请输入三角形的三条边："<<endl;
    cin >> a >> b >> c;
    if (a + b > c && b + c > a && a + c > b)
    {
        s = (a + b + c);
        cout << "三角形周长为：" << s << endl;
        if (a == b || a == c || b == c)
        {
            cout << "等腰三角形" << endl;
        }
    }
    else {
        cout << "不能构成三角形" << endl;
    }
}
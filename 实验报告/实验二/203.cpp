#include<iostream>
using namespace std;
int main()
{
    float a, b, c, s;
    cout<<"�����������ε������ߣ�"<<endl;
    cin >> a >> b >> c;
    if (a + b > c && b + c > a && a + c > b)
    {
        s = (a + b + c);
        cout << "�������ܳ�Ϊ��" << s << endl;
        if (a == b || a == c || b == c)
        {
            cout << "����������" << endl;
        }
    }
    else {
        cout << "���ܹ���������" << endl;
    }
}
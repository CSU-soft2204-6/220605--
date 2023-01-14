#include "iostream"
#include "vector" 
#include "algorithm" //sort����������������
#include "iterator" //�󽻲���ʹ�õ��ĵ�����
using namespace std;

//��ӡ����vector
void print_vector(vector<int> v) {
	if (v.size() > 0) {
		cout << "{";
		for (int i = 0; i<int(v.size()); i++) {
			cout << v[i] << ",";
		}
		cout << "\b}";
	}
	else {
		cout << "{}";
	}
}

//����vector�󽻼�
vector<int> vectors_intersection(vector<int> v1, vector<int> v2) {
	vector<int> v;
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());
	set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), back_inserter(v));//�󽻼� 
	return v;
}

int main()
{
	vector<int> v1, v2, v;
	int a, b, c, d, e, f, g, h, i, j;
	cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j;
	v1.push_back(a); v1.push_back(b); v1.push_back(c); v1.push_back(d); v1.push_back(e);
	v2.push_back(f); v2.push_back(g); v2.push_back(h); v2.push_back(i); v2.push_back(j);
	cout << "��v1��v2�Ľ�����";
	v = vectors_intersection(v1, v2);
	print_vector(v);
	cout << endl;
	return 0;
}
#include "iostream"
#include "vector" 
#include "algorithm" //sort函数、交并补函数
#include "iterator" //求交并补使用到的迭代器
using namespace std;

//打印容器vector
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

//两个vector求交集
vector<int> vectors_intersection(vector<int> v1, vector<int> v2) {
	vector<int> v;
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());
	set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), back_inserter(v));//求交集 
	return v;
}

int main()
{
	vector<int> v1, v2, v;
	int a, b, c, d, e, f, g, h, i, j;
	cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j;
	v1.push_back(a); v1.push_back(b); v1.push_back(c); v1.push_back(d); v1.push_back(e);
	v2.push_back(f); v2.push_back(g); v2.push_back(h); v2.push_back(i); v2.push_back(j);
	cout << "求v1与v2的交集：";
	v = vectors_intersection(v1, v2);
	print_vector(v);
	cout << endl;
	return 0;
}
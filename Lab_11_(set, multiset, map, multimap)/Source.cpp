#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

typedef unsigned int  u_int;
typedef vector<int>   i_vector;
typedef map<int, int> ii_map;

int main() {
	ii_map   m_repead;
	i_vector v_num;

	v_num.resize(100);

	for (auto& it : v_num)
		it = rand() % 10;

	for (auto& it : v_num) 
		if (m_repead.find(it) == m_repead.end())
			m_repead[it] = count(v_num.begin(), v_num.end(), it);

	for (auto& it : m_repead) 
		cout << it.first << " " << it.second << endl;

	return 0;
}
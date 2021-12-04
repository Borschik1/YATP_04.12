#include <iostream>
#include <string> 
#include <fstream>
#include <vector>
#include <cmath>


using namespace std;


int main() {
	int m, n;
	cin >> m >> n;
	int del = m / n;
	int ost = m % n;
	int i = 0;
	vector <int> prov;
	vector <int> prov2;
	int flag = 0;
	while (i == 0) {
		ost = ost * 10;
		int ost2 = ost;
		int k = ost / n;
		ost = ost % n;
		if ((ost == 0) || (find(prov2.begin(), prov2.end(), ost2) != prov2.end())){
			if (ost == 0) {
				flag = 1;
			}
			prov.push_back(k);
			prov2.push_back(ost2);
			break;
		}
		else {
			prov.push_back(k);
			prov2.push_back(ost2);
		}
	}
	if (flag == 0) {
		cout << del << "," << "(";
		for (int i = 0; i < size(prov) - 1; i++) {
			cout << prov[i];
		}
		cout << ")";
	}
	else {
		cout << del << ",";
		for (int i = 0; i < size(prov); i++) {
			cout << prov[i];
		}
	}
	return 0;
}
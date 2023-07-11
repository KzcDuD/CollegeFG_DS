#include<iostream>
using namespace std;

//宣告二維陣列，設最多有30個
int adjMatric[30][30];

//在陣列中畫上1
void add_edge(int u, int v)
{
	adjMatric[u][v] = 1;
	adjMatric[v][u] = 1;
}

int main()
{
	//有6個點
	int v = 6;
	//建立圖的部分
	add_edge(0, 1);
	add_edge(0, 2);
	add_edge(0, 3);
	add_edge(1, 2);
	add_edge(1, 4);
	add_edge(2, 5);
	add_edge(3, 5);
	add_edge(4, 5);

	//印出陣列
	for(int i = 0; i < v; ++i)
	{
		for(int j = 0; j < v; ++j)
			cout << adjMatric[i][j] << " ";
		cout << endl;
	}
	return 0;
}
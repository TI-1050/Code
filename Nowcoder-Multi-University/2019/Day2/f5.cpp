#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define N 40

int n, m;
int v[N][N];
ll ans;
int arr[N], brr[N];

inline void calc() {
	ll res = 0;
	for (register int i = 1; i <= m; ++i) {
		for (register int j = 1; j <= m; ++j) {
			res += v[arr[i]][brr[j]];
		}
	}
	ans = max(ans, res);
}

void DFS(int pos, int cnt) {
	// 1
	if (cnt == n - pos + 1) {
		int tmp = arr[0];
		for (register int i = pos; i <= n; ++i) {
			arr[++arr[0]] = i;
		}
		calc();
		arr[0] = tmp;
		return ;
	}
	if (cnt) {
		arr[++arr[0]] = pos;
		if (pos < n) {
			DFS(pos + 1, cnt - 1);
		} else {
			calc();
		}
		--arr[0];
	}
	//0
	brr[++brr[0]] = pos;
	if (pos < n) {
		DFS(pos + 1, cnt);
	} else {
		calc();
	}
	--brr[0];
}

int main() {
	scanf("%d", &n);
	m = n;
	n <<= 1;
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			scanf("%d", &v[i][j]);
		}
	}
	DFS(1, m);
	printf("%lld\n", ans);
	return 0;	
}

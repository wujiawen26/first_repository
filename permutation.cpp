#include <iostream>
using namespace std;
int cnt = 0;
void print_permutation(int n);
void permutation(int n, int* A, int cur);

int main(){
	print_permutation(7);
	return 0;
}

void print_permutation(int n){
	int A[n];
	permutation(n, A, 0);
}
//git test
void permutation(int n, int *A, int cur){
	if (cur == n){
		cout << "( " << A[0];
		for (int i = 1; i < n; i++)
			cout << ", " << A[i];
		cout << " )" << endl;
		return;
	}
	for (int i = 1; i <= n; i++){
  		bool ok = true;
		for (int j = 0; j < cur; j++)
			if (A[j] == i)
				ok = false;
		if (ok){
			A[cur] = i;
			permutation(n, A, cur + 1);
			//��permutation(n, A, ++cur);������Ѫ��������ϸ�������Ҫ��ӡ����һ���ı��ʽ��ʵ����������ġ�����
			//�����Ժ�ǧ��Ҫע�⣬ʹ�ü򻯵���ʽʱ�������ǲ��ǵȼۣ����������ĸ�
		}
	}
}

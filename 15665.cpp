#include<iostream>
#include<algorithm>
using namespace std;

int n,m;
int arr[10];

int arr2[10];

void func(int k){ // 현재 k개까지 수를 택했음.
  if(k == m){ // m개를 모두 택했으면
    for(int i = 0; i < m; i++)
      cout << arr[i] << ' '; // arr에 기록해둔 수를 출력
    cout << '\n';
    return;
  }

    int xx=-1;
  for(int i = 0; i < n; i++){ // 1부터 n까지의 수에 대해
    if(xx!=arr2[i]){ // 아직 i가 사용되지 않았으면
      xx=arr2[i];
      arr[k] = arr2[i]; // k번째 수를 i로 정함

      func(k+1); // 다음 수를 정하러 한 단계 더 들어감

    }
  }
}

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> m;
  for(int i=0;i<n;i++){
      cin>>arr2[i];
  }
  sort(arr2,arr2+n);
  func(0);
}
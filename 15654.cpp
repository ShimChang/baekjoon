#include<iostream>
#include<algorithm>
using namespace std;

int n,m;
int arr[10];
bool isused[10002];
int arr2[10];

void func(int k){ // 현재 k개까지 수를 택했음.
  if(k == m){ // m개를 모두 택했으면
    for(int i = 0; i < m; i++)
      cout << arr[i] << ' '; // arr에 기록해둔 수를 출력
    cout << '\n';
    return;
  }

  for(int i = 0; i < n; i++){ // 1부터 n까지의 수에 대해
    if(!isused[arr2[i]]){ // 아직 i가 사용되지 않았으면
      arr[k] = arr2[i]; // k번째 수를 i로 정함
      isused[arr2[i]] = 1; // i를 사용되었다고 표시
      func(k+1); // 다음 수를 정하러 한 단계 더 들어감
      isused[arr2[i]] = 0; // k번째 수를 i로 정한 모든 경우에 대해 다 확인했으니 i를 이제 사용되지않았다고 명시함.
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
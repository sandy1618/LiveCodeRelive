#include <iostream>
#include <bits/stdc++.h>

int maxWork(std::vector<int> vect , int T , int K){
    int work_count{0},sum{0};
    for (auto itr = vect.begin(); itr !=vect.end(); itr++)
    {
        sum += *itr + K;
        if (sum > T) break ;
        work_count++;
    }
    return work_count;
}
int main(void) {
  int N, T , K, ch;
  std::cin >> N >> T >> K;
  std::vector<int> vect;
  while(N--){
      std::cin >> ch;
      vect.push_back(ch);
      }
  int workcount= maxWork(vect, T , K );
    std::cout << workcount << std::endl;
  return 0;
}
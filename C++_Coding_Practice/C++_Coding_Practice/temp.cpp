#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int compare_str(string str1, string str2){
  string c1 ,c2;
  c1 = str1[str1.size()-2] +str1[str1.size()-1];
  str1.pop_back();
  str1.pop_back();
  c2 =  str2[0] +  str2[1];
  string new_str;
  if (c1[0] == c2[0] && c1[1]==c2[1]){
     new_str = str1+str2;
     return new_str.size();
  }
  else return -1;
}
int main(int argc, char *argv[]) {
  // このコードは標準入力と標準出力を用いたサンプルコードです。
  // このコードは好きなように編集・削除してもらって構いません。
  // ---
  // This is a sample code to use stdin and stdout.
  // Edit and remove this code as you like.

  string str;
  vector<string> vec;
  int t;

  // str1 = "nayak";
  // string str2 = "akh";
  // cout << compare_str(str1,str2);
  
  cin >> t;
  while(t--){

    cin >> str;
    if(str.size()>1) vec.push_back(str);
  }
  int max = -1;
  int count = 0;
  if(!vec.empty())
  {
    for(int i=0;i<vec.size();++i){
      for(int j=0;j<vec.size();++j){
        if(i!=j){
          count = compare_str(vec[i],vec[j]);
          if(count > max){
            max = count;
          }
        }
      }
    }
  }
  cout << max << endl;
  return 0;
}

class Solution {
public:
    string digitSum(string s, int k) {
      while(s.length() > k){
        string new_s = "";
        int i = 0;
        
        while(i < s.size()){
          string grp = s.substr(i,k);
          i = i + k;

          int sum = 0;
          for(char c :  grp){
            sum += c - '0';
          }
          new_s += to_string(sum);
        }
        s = new_s;
      }
      return s;
    }
};

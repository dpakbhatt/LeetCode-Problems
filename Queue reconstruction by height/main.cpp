void print_vector(vector<vector<int> > v){
   cout << "[";
   for(int i = 0; i<v.size(); i++){
      cout << "[";
      for(int j = 0; j <v[i].size(); j++){
         cout << v[i][j] << ", ";
      }
      cout << "],";
   }
   cout << "]"<<endl;
}

bool cmp(vector <int> a, vector <int> b){
   if(a[0] == b[0])return a[1] > b[1];
      return a[0] < b[0];
}

class Solution {
public:
   vector<vector<int>> reconstructQueue(vector<vector<int>>& p) {
      sort(p.begin(), p.end(), cmp);
      vector < vector <int> > ans;
      for(int i = p.size()-1; i>=0; i--){
         ans.insert(ans.begin() + p[i][1], p[i]);
      }
      return ans;
   }
};

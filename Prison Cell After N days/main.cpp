class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int N) {
        N = N % 14 == 0 ? 14 : N % 14;
        vector<int> v(8,0);
        while(N--)
        {
           for(int i =1; i < cells.size()- 1; i++)
           {
              if((cells[i-1] && cells[i+1]) || (!cells[i-1] && !cells[i+1] ))
              {
                  v[i] = 1;
              }
              else
                  v[i] = 0;
           }
           cells = v;
        }
        return cells;
    }
};

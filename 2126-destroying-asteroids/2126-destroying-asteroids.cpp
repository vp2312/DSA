class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& ast) {
        long long int masss=mass;
        sort(ast.rbegin(),ast.rend());
        while(ast.size()>0 && masss>0)
        {
            if(masss>=ast[ast.size()-1])
            {
                masss+=ast[ast.size()-1];
                ast.pop_back();
            }
            else
            {
                return false;
            }
        }
        
        return true;
    }
};
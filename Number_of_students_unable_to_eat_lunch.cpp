class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) 
    {
        int n = students.size();
        int c = 0;
        int s = 0;
        for(int i = 0; i < students.size(); i++)
        {
            if(students[i] == 0)
                c++;
            else
                s++;
        }
        for(int i = 0; i < sandwiches.size(); i++)
        {
            if(sandwiches[i] == 0)
            {
                if(c > 0)
                {
                    c--;
                    n--;
                }
                else
                {
                    return n;
                }
            }
            else
            {
                if(s > 0)
                {
                    s--;
                    n--;
                }
                else
                    return n;
            }
        }
        return n;
        
    }
};
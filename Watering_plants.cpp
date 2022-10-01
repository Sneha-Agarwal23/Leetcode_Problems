class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) 
    {
        int steps = 0;
        int c = capacity;
        for(int i = 0; i < plants.size(); i++)
        {
            if(plants[i] <= c)
            {
                steps++;
            }
            else
            {
                steps += i;
                steps += i+1; 
                c = capacity;
            }
            c = c - plants[i];
        }
        return steps;
        
    }
};
class Solution {
public:
    vector<double> convertTemperature(double celsius) 
    {
        vector<double> sa(2);
        sa[0]=celsius+273.15;
        sa[1]=celsius*1.80+32.00;
        return sa;    
    }
};
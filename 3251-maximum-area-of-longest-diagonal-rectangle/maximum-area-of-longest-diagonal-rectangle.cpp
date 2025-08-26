class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {

        int n=dimensions.size();

        int max_area=0;
        int max_dia=0;


        for(int i=0;i<n;i++)
        {
            int l=dimensions[i][0];
            int w=dimensions[i][1];

            int dia=l*l+w*w;

            if(dia>max_dia)
            {
                max_area=l*w;
                max_dia=dia;
            }
            else if(dia==max_dia)
            {
                max_area=max(max_area,l*w);
            }
        }

        return max_area;
        
    }
};
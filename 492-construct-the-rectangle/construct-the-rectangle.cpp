class Solution {
public:
    vector<int> constructRectangle(int area) 
    {
        vector< int > area_1 ;
         int l = 1 ;
         int w = 1 ;
         for( int i = 1 ; i * i <= area ; i++ )
         {
                if( area % i == 0 )
                {
                    w = i ;
                    l = area / w ;
                }
         }
    area_1.push_back(l) ;
    area_1.push_back(w) ;
    return area_1;
    }
};

/***
        int w = 1;
        int l = 1 ; 
        int area_cal = 1;
        area_cal =  w * l ;
        //area_cal = area
        while(area_cal == area)
        {
            for(int i = 0 ; i <= area ; i++)
            {
                l = area / w
            }
        }   
        ***/
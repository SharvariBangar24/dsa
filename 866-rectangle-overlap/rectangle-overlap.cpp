class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2)
    {
    if( rec2[0] >= rec1[2]  ||  rec2[1] >= rec1[3]  ||  rec2[2] <= rec1[0]  ||  rec2[3] <= rec1[1]  )
    {
        return false;
    }

    return true ;
    }
};


/***
no need to calculate area bruh ...just check its coordinates...fix 1 rect ..dusre ko uske left right top bottom pr rakho ...if its that then it wont overlap 
ez
        int l1 = 0 ; int b1 = 0 ; int area1 = 0 ; int area2 = 0 ;int l2 = 0 ; int b2=0;
        for( int i = 0 ; i < rec1.size() ; i++ )
        {
            l1 = (rec1[3]- rec1[1]) ;
            b1 = (rec1[2] - rec1[0]) ;
            area1 = l1 * b1 ;
        }
        for( int j = 0 ; j < rec2.size() ; j++ )
        {
            l2 = (rec2[3]- rec2[1]) ;
            b2 = (rec2[2] - rec2[0]) ;
            area2 = l2 * b2 ;
        }
        ***/
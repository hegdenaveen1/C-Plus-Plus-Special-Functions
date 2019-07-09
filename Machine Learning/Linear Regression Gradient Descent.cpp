***********************Returns predicted value****************************************



struct point
{
    int x;
    int y;
};

int LinearRegressionGradientDescent(vector<point> vec,int xgiven)
{
    int n=vec.size();
    int yneeded;
     real m,c;
        if(vec[0].x!=0)
        {
         m=vec[0].y/vec[0].x;
         c=0;
        }
        else
        {
            m=2;
            c=vec[0].y;
        }

        real prevm=m,prevc=c;

    int nochange=1;
    int iterations=100000;
     while(iterations--)   
     {
        real cgradient=0;

        for(int i=0;i<n;i++)
        {
            cgradient+=m*vec[i].x+c - vec[i].y;
        }

        real mgradient=0;

        for(int i=0;i<n;i++)
        {
            mgradient+=(m*vec[i].x+c - vec[i].y)*vec[i].x;
        }

        c=c-0.001*cgradient/n;
        m=m-0.0001*mgradient/n;
        if(abs(prevc-c)<0.0000001&&abs(prevm-m)<0.0000001)
        {
            nochange=0;
        }
        else
        {
            prevc=c;
            prevm=m;
        }

    }

    yneeded=m*xgiven+c;

    return yneeded;
}



***************************************************************************************************
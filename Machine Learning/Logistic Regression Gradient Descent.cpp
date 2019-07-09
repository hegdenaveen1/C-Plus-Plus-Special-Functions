

struct point
{
    int x;
    int y;
};

real LogisticRegressionGradientDescent(vector<point> vec,int xgiven)
{
    int n=vec.size();
    real yneeded;
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
            cgradient+=(1/(1+pow(2.703,-1*(m*vec[i].x+c)))) - vec[i].y;
        }

        real mgradient=0;

        for(int i=0;i<n;i++)
        {
            mgradient+=(1/(1+pow(2.703,-1*(m*vec[i].x+c))) - vec[i].y)*vec[i].x;
        }

        trace2(m,c);
        c=c-cgradient/n;
        m=m-mgradient/n;
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

    yneeded=1/(1+pow(2.703,-1*(m*xgiven+c)));


    //yneeded gives the probability
    if(yneeded>=0.5)
        {
            return 1;
        }
    else
        {
            return 0; 
        }
}
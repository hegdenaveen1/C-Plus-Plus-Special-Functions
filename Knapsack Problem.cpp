
******************************************************************************************************************************************
//Returns the answer of Discrete Knapsack With Repetitions Problem


int DiscreteKnapsackWithRepetitions(const int Maxweight,const vector<int> weight,const vector<int> value,const int Numberofitems)
{

  vector<int> Maxvalue(Maxweight+1);

  Maxvalue[0]=0;

  for(int w=1;w<=Maxweight;w++)
  {
    Maxvalue[w]=0;

    for(int i=0;i<Numberofitems;i++)
    {
      if(weight[i]<=w)
      {
        Maxvalue[w]=max(Maxvalue[w],Maxvalue[w-weight[i]]+value[i]);
      }
    }

  }

  return Maxvalue[Maxweight];
}

*******************************************************************************************************************************************
//Returns the answer of Discrete Knapsack Without Repetitions Problem


int DiscreteKnapsackWithoutRepetitions(const int W, const vector<int> &weight , const vector<int> &value)
{
  int n=weight.size();

  int Maxvalue[W+1][n+1];

  for(int i=0;i<W+1;i++)
  {
    Maxvalue[i][0]=0;
  }

  for(int i=0;i<n+1;i++)
  {
      Maxvalue[0][i]=0;
  }


  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=W;j++)
    {
      Maxvalue[j][i]=Maxvalue[j][i-1];
      if(weight[i-1]<=j)
      {
        Maxvalue[j][i] = max((Maxvalue[j][i]),(Maxvalue[(j-weight[i-1])][i-1])+value[i-1]);
      }
    }
  }

  return Maxvalue[W][n];
}

*********************************************************************************************************************************************
//Returns the answer of Fractional Knapsack Problem


struct knap
{
  long double value,weight;
};

bool comp(knap a,knap b)
{

  if(a.value/a.weight<b.value/b.weight)
    return true;
  else if(a.value/a.weight>b.value/b.weight)
    return false;
  else
  {
      if(a.weight<b.weight)
        return false;
      else
        return true; 

  }
}

long double FractionalKnapsack(long double Maxweight,vector<knap> &Bag)
{
  long double n=Bag.size();
  stable_sort(Bag.rbegin(),Bag.rend(),comp);
  long double i=0;
  long double a;
  long double ans=0;

  while(Maxweight>0&&i<n)
  {
  
  
    a = min(Maxweight,Bag[i].weight);
    ans = ans + a*(Bag[i].value/Bag[i].weight);
    Maxweight = Maxweight - a ;
    i++;
  }

  return ans;
}

***************************************************************************************************************************************

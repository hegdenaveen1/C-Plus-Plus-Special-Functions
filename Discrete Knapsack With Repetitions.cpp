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
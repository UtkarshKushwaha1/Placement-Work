#include <bits/stdc++.h>
using namespace std;

double get_optimal_value(int capacity, vector<int> weights, vector<int> values)
{
  double value = 0.0;
  vector<double> valueperunitweight;

  for(int i = 0; i < weights.size();i++)
  {
    valueperunitweight.push_back((double)values[i]/weights[i]);
  }

  sort(valueperunitweight.begin(), valueperunitweight.end(),greater<double>());
  for (int i = 0; i <valueperunitweight.size();i++){
   cout<<valueperunitweight[i]<<endl;
   }
  for(int i=0;i<weights.size();i++)
  {
    if (capacity==0)
      return value;
    else
      if(weights[i]!=0)
      {int a=std::min(weights[i],capacity);
       value=value+a*valueperunitweight[i];
       weights[i]-=a;
       capacity-=a;
      } 
  }
  return value;
}
int main() 
{
  int n;
  int capacity;
  cin>>n>>capacity;
  vector<int> values(n);
  vector<int> weights(n);
  for (int i = 0; i < n; i++)
  {
    cin>>values[i]>>weights[i];
  }

  cout<<get_optimal_value(capacity, weights, values)<<endl;
  return 0;
}
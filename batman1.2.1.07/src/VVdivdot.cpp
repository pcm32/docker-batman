// written by Dr. Jie Hao, Dr William Astle
#include <vector>
using namespace std;

void VVdivdot (vector<double> * V, vector<double> * V2, vector<double> *P )
{ 
  for (unsigned int i = 0; i<(*V).size(); i++)
    (*P)[i] =(*V)[i]/(*V2)[i];      
}


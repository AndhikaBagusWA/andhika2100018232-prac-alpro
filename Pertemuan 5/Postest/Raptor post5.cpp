#include <iostream>
#include <string>

using namespace std;
int main()
{
   string raptor_prompt_variable_zzyz;
   int b;
   float hasil;
   int i;
   int a;

   raptor_prompt_variable_zzyz ="input b";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> b;
   cout << "input b = "<< b << endl;   a =1;
   i =1;
   hasil =a;
   while (1)
   {
      if (i % 2==0)
      {
         a =a*1/i;
         hasil =-a;
      }
      else
      {
         a =a*1/i;
         hasil =a;
      }
      i =i+1;
      if (i>b) break;
   }
   cout << hasil << endl;
}

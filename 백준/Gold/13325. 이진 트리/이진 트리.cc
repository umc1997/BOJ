#include <iostream>
#include <fstream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <vector>

using namespace std;

struct Node
{
   int data;
   int left;
   int right;
   bool child;
   int sum;

};
Node Tree[1 << 23];

int main()
{
   ifstream in;
   in.open("input.txt");
   int test = 1;
   for (int l = 0; l < test; l++)
   {

      int k;
      cin >> k;
      Tree[1] = { 0,2,3,true,0 };
      int num = pow(2, k + 1) - 1;
      int result = 0;
      for (int i = 2; i <=num ; i++)
      {
         int a;
         cin >> a;
         Tree[i] = { a,i * 2,i * 2 + 1,true,0 };
         if (i * 2 > num)
         {
            Tree[i].child = false;
         }
      }
      /*for (int i = 1; i <= num; i++)
      {
         printf("Before   %d번째  Data: %d Left:%d Right:%d Child:%d Sum:%d\n",i, Tree[i].data, Tree[i].left, Tree[i].right, Tree[i].child, Tree[i].sum);
      }
      cout << endl;*/
      for (int i = num; i >= 1; i--)
      {
         if (!Tree[i].child)
         {
            Tree[i].sum = Tree[i].data;
            continue;
         }
         int lidx = Tree[i].left;
         int ridx = Tree[i].right;
         int m = max(Tree[lidx].sum, Tree[ridx].sum);
         if (m == Tree[lidx].sum)
         {
            Tree[ridx].data += (Tree[lidx].sum - Tree[ridx].sum);
            Tree[ridx].sum += (Tree[lidx].sum - Tree[ridx].sum);
         }
         else
         {
            Tree[lidx].data += (Tree[ridx].sum - Tree[lidx].sum);
            Tree[lidx].sum += (Tree[ridx].sum - Tree[lidx].sum);
         }
         
         Tree[i].sum = Tree[lidx].sum + Tree[i].data;
      }
      for (int i = 1; i <= num; i++)
      {
         result += Tree[i].data;
      }
      cout << result << endl;
      /*for (int i = 1; i <= num; i++)
      {
         printf("After  %d번째  Data: %d Left:%d Right:%d Child:%d Sum:%d\n",i,Tree[i].data, Tree[i].left, Tree[i].right, Tree[i].child, Tree[i].sum);
      }
      cout << endl;*/
   }
   return 0;
}
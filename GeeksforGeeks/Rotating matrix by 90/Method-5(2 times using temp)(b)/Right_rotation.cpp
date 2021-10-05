/* AUTHOR - ANIMESH BARUN*/
/*AKA - THE NOOB CODER*/
#include <bits/stdc++.h>
using namespace std;

void init_code()
{
 #ifndef ONLINE_JUDGE
 freopen("input.txt", "r", stdin);
 freopen("output.txt", "w", stdout);
 #endif // ONLINE_JUDGE
}

void rotate_right_90(int **a,int n)
{   
 for(int i=0;i<n;i++)
     {
      for(int j=0;j<n-1-i;j++)
         {
          int temp = a[i][j];
          a[i][j] = a[n-1-j][n-1-i];
          a[n-1-j][n-1-i] = temp;
         }  
     }

 for(int i=0;i<n/2;i++)
    {
     for(int j=0;j<n;j++)
        {
         int temp = a[i][j];
         a[i][j] = a[n-1-i][j];
         a[n-1-i][j] = temp; 
        }
    }     

 for(int i=0;i<n;i++)
     {
      for(int j=0;j<n;j++)
         {
          cout<<a[i][j]<<" ";
         } 
      cout<<"\n";   
     }   
}

int main()
{
 init_code();
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);

 int n;
 cin>>n;  
 int **a = new int*[n];
 for(int i=0;i<n;i++)
     {
      a[i] = new int[n];    
     }

 for(int i=0;i<n;i++)
     {
      for(int j=0;j<n;j++)
         {
          cin>>a[i][j]; 
         }  
     }
 
 rotate_right_90(a,n);
 return 0;
}
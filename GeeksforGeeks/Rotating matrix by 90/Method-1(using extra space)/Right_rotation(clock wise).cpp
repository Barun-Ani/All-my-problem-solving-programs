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

void rotate_right_90(int **a,int m,int n)
{
 int b[n][m];   
 for(int i=0;i<m;i++)
    {
     for(int j=0;j<n;j++)
        {
         b[j][m-1-i] = a[i][j];
        }   
    }

 for(int i=0;i<n;i++)
    {
     for(int j=0;j<m;j++)
        {
         cout<<b[i][j]<<" ";    
        }   
     cout<<"\n";   
    }
        
}

int main()
{
 init_code();
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);

 int m,n;
 cin>>m>>n;  
 int **a = new int*[m];
 for(int i=0;i<m;i++)
     {
      a[i] = new int[n];    
     }

 for(int i=0;i<m;i++)
     {
      for(int j=0;j<n;j++)
         {
          cin>>a[i][j]; 
         }  
     }
 
 rotate_right_90(a,m,n);
 return 0;
}
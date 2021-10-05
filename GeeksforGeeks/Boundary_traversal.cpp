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

bool boundary_traversal(int **a,int m,int n)
{   
 for(int i=0;i<m;i++)
    {
     for(int j=0;j<n;j++)
        {
         if(i==0 || i==m-1 || j==0 || j==n-1)
            cout<<a[i][j]<<" ";
         else
            cout<<"  "; 
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
 
 boundary_traversal(a,m,n);
 return 0;
}
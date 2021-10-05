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

bool search(int **a,int m,int n,int x)
{   
 if(n==0) return false;

 int smallest = a[0][0],largest = a[n-1][n-1];
 if(x<smallest || x>largest) return false;

 int j=n-1,i=0;
 while(i<n && j>=0)
      {
       if(a[i][j]>x) j--;
       if(a[i][j]<x) i++;
       if(a[i][j]==x) return true; 
      }
 return false;     
}

int main()
{
 init_code();
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);

 int m,n,x;
 cin>>m>>n>>x;  
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
 
 if(search(a,m,n,x))
    cout<<"FOUND";
 else
    cout<<"NOT FOUND";
 return 0;
}
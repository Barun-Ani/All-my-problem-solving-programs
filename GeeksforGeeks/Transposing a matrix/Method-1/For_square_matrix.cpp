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

void transpose(int **a,int n)
{
 int b[n][n];
 for(int i=0;i<n;i++)
    {
     for(int j=0;j<n;j++)
        {
         b[i][j] = a[j][i];	
        }	
    }

 for(int i=0;i<n;i++)
    {
     for(int j=0;j<n;j++)
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
 
 transpose(a,n);
 return 0;
}
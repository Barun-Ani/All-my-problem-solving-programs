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

void snake_pattern(int **a,int n)
{
 for(int i=0;i<n;i++)
 	 {
 	  if(i%2==0)
 	    {
 	     for(int j=0;j<n;j++)
 	        {
 	         cout<<a[i][j]<<" ";	
 	        }	
 	    }

 	  if(i%2==1)
 	    {
 	     for(int j=n-1;j>=0;j--)
 	        {
 	         cout<<a[i][j]<<" ";	
 	        }	
 	    }

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

 snake_pattern(a,n);

 return 0;
}
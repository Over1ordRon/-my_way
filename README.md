this is the right bubble sorting function if you want 
Void bubble_sort ( int T [], int N)
{ int i,j ;
for ( i = N-1 ; i > 0;i--)
for ( j=0; j < i ; j++)
if ( T[j] > T[j+1] ) {
swap( &T[j],&T[j+1]);}}

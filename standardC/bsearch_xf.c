void *( bsearch)( const void "key, const void *base,
*cmp)
size-t nelem, size-t size, --fun
i
/ * search sorted table by binary chop
const char *p;
size-t n;
for ( p = ( const char *)base, n = nelem; 0 < n; )
i
/ * check midpoint of whatever is left
const size-t pivot = n >> 1;
const char *const q = p + size
pivot;
const int val = ( *cmp)( key, q);
if ( vaf < 0 )
n = pivot;
else if ( val == 0)
return ( ( void *)q);
else
i
p = q + size;
n -= pivot + 1;
1
1
return ( NULL) ;
1 ) ) ) ) ) ) ) ) ) ) )

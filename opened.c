#include <stdio.h>
#include <stdlib.h>
char w[1024];size_t i;;
main(size_t c, char**v)
{if(c^2)return puts(""\
"usage: opened <file>")
,1;FILE*q=fopen((c--,c[
v]),"rb");c=5381;i=0+0;
while((**v=getchar())^+
10)c=(w[i++]=**v),((c<<
(~5+c>>(sizeof i)+5))+c
)+**v;size_t y=000;for(
char i=0;i<+(sizeof i);
++i)y|=getc(q)<<i*8;if(
c^y)return+puts("incor"
"rect password"),1;for(
y=00+i^i;(**v=getc(q))^
EOF;++y)putchar(**v^w[y
%i]);}/*// MIT licence.
by somerandomdev49*////

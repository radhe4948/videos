1]
/* Program to simulate sequential file allocation
strategy */
Program Code:
#include &lt; stdio.h&gt;
#include&lt;conio.h&gt;
void main()
{
int f[50], i, st, len, j, c, k, count = 0;
clrscr();
for(i=0;i&lt;50;i++)
f[i]=0;
printf(&quot;Files Allocated are : \n&quot;);
x: count=0;
printf(“Enter starting block and length of files: ”);
scanf(&quot;%d%d&quot;, &amp;st,&amp;len);
for(k=st;k&lt;(st+len);k++)
if(f[k]==0)
count++;
if(len==count)
{
for(j=st;j&lt;(st+len);j++)
if(f[j]==0)
{
f[j]=1;
printf(&quot;%d\t%d\n&quot;,j,f[j]);
}
if(j!=(st+len-1))
printf(” The file is allocated to disk\n&quot;);
}
else
printf(” The file is not allocated \n&quot;);

printf(&quot;Do you want to enter more file(Yes - 1/No - 0)&quot;);
scanf(&quot;%d&quot;, &amp;c);
if(c==1)
goto x;
else
exit();
getch();
}
Program Output:
Files Allocated are :
Enter starting block and length of files: 14 3
14 1
15 1
16 1
The file is allocated to disk
Do you want to enter more file(Yes - 1/No - 0)1
Enter starting block and length of files: 14 1
The file is not allocated
Do you want to enter more file(Yes - 1/No - 0)1
Enter starting block and length of files: 14 4
The file is not allocated
Do you want to enter more file(Yes - 1/No - 0)0




2]
* Program to simulate linked file allocation
strategy */
Program Code:
#include&lt;stdio.h&gt;
#include&lt;conio.h&gt;
#include&lt;stdlib.h&gt;

void main()
{
int f[50], p,i, st, len, j, c, k, a;
clrscr();
for(i=0;i&lt;50;i++)
f[i]=0;
printf(&quot;Enter how many blocks already allocated: &quot;);
scanf(&quot;%d&quot;,&amp;p);
printf(&quot;Enter blocks already allocated: &quot;);
for(i=0;i&lt;p;i++)
{
scanf(&quot;%d&quot;,&amp;a);
f[a]=1;
}
x: printf(&quot;Enter index starting block and length: &quot;);
scanf(&quot;%d%d&quot;, &amp;st,&amp;len);
k=len;
if(f[st]==0)
{
for(j=st;j&lt;(st+k);j++)
{
if(f[j]==0)
{
f[j]=1;
printf(&quot;%d--------&gt;%d\n&quot;,j,f[j]);
}
else
{
printf(&quot;%d Block is already allocated \n&quot;,j);
k++;
}

}
}
else
printf(&quot;%d starting block is already allocated \n&quot;,st);
printf(&quot;Do you want to enter more file(Yes - 1/No - 0)&quot;);
scanf(&quot;%d&quot;, &amp;c);
if(c==1)
goto x;
else
exit(0);
getch();
}

Program Output:
Enter how many blocks already allocated: 3
Enter blocks already allocated: 1 3 5
Enter index starting block and length: 2 2
2--------&gt;1
3 Block is already allocated
4--------&gt;1
Do you want to enter more file(Yes - 1/No - 0)0




3]
/* Program to simulate indexed file allocation
strategy */
Program Code:
#include&lt;stdio.h&gt;
#include&lt;conio.h&gt;
#include&lt;stdlib.h&gt;
void main()

{
int f[50], index[50],i, n, st, len, j, c, k, ind,count=0;
clrscr();
for(i=0;i&lt;50;i++)
f[i]=0;
x:printf(&quot;Enter the index block: &quot;);
scanf(&quot;%d&quot;,&amp;ind);
if(f[ind]!=1)
{
printf(&quot;Enter no of blocks needed and no of files for the
index %d on the disk : \n&quot;, ind);
scanf(&quot;%d&quot;,&amp;n);
}
else
{
printf(&quot;%d index is already allocated \n&quot;,ind);
goto x;
}
y: count=0;
for(i=0;i&lt;n;i++)
{
scanf(&quot;%d&quot;, &amp;index[i]);
if(f[index[i]]==0)
count++;
}
if(count==n)
{
for(j=0;j&lt;n;j++)
f[index[j]]=1;
printf(&quot;Allocated\n&quot;);
printf(&quot;File Indexed\n&quot;);

for(k=0;k&lt;n;k++)
printf(&quot;%d--------&gt;%d : %d\n&quot;,ind,index[k],f[index[k]]);
}
else
{
printf(&quot;File in the index is already allocated \n&quot;);
printf(&quot;Enter another file indexed&quot;);
goto y;
}
printf(&quot;Do you want to enter more file(Yes - 1/No - 0)&quot;);
scanf(&quot;%d&quot;, &amp;c);
if(c==1)
goto x;
else
exit(0);
getch();
}

Program Output:
Enter the index block: 5
Enter no of blocks needed and no of files for the index 5 on
the disk :
4
1 2 3 4
Allocated
File Indexed
5--------&gt;1 : 1
5--------&gt;2 : 1
5--------&gt;3 : 1
5--------&gt;4 : 1
Do you want to enter more file(Yes - 1/No - 0)1

Enter the index block: 4
4 index is already allocated
Enter the index block: 6
Enter no of blocks needed and no of files for the index 6 on
the disk :
2
7 8
A5llocated
File Indexed
6--------&gt;7 : 1
6--------&gt;8 : 1
Do you want to enter more file(Yes - 1/No - 0)0

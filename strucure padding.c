

### Structure Padding and Packing concepts

* structure padding uses the concept called , 1x4 for int , 1x8 for long long int and so on..
  
struct  students 
{ 
int a;

char b;
long long int  c;
char d;

}s1;

struct __attribute__((__packed__)) students1 
{ 
int a;
char b;
long long int  c;
char d;

}s2;

** Outputs**
user@user-OptiPlex-9020:~$ gcc strct.c -o strct 
user@user-OptiPlex-9020:~$ ./strct 
24
0x7ffd1f70aea0 
0x7ffd1f70aea4
0x7ffd1f70aea8
0x7ffd1f70aeb0

14
0x7ffd1f70ae92 
0x7ffd1f70ae96
0x7ffd1f70ae97
0x7ffd1f70ae9f

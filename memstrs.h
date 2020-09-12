#ifndef __ProgramOnce__

#define __ProgramOnce__
#include <iostream>
#include <string.h>
using namespace std;
#endif

int memsets(char str[],string ipt){
for(int i=0;i<ipt.size();i++){
memset(str+i,ipt[i],1);
memset(str+i+ipt.size(),'\0',1);
}
return ipt.size();
}

long long int memchrs(char str[],string ipt){
	char *p,*ptr;
	int i,ok=0;
	p = (char*) memchr (str, ipt[0], strlen(str));
	if(ipt.size()>1){
	for(i=1;i<ipt.size();i++)
	{
	ptr=NULL;
	ptr = (char*) memchr (str, ipt[i], strlen(str));
	if(ptr!=NULL) ok++;
	}
}
	if (p!=NULL&&ipt.size()-1==ok){
	auto di = p - str;
	return di;
	}
	else return -1;
}

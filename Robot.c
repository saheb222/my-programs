# include <stdio.h>
# include <string.h>

int main(){
	  char s[100];
	  int  i,n,ar[5],j,f,b,t,fd,bd,ch,td,tt,ed;
	   fflush(stdin);
	   scanf("%d",&ch);
	   while(ch>0){
		   j=0;
		   ed=0;
		   tt=0;
		   td=0;
	   fflush(stdin);
	  scanf(" %[^\n]s",s);
	   //gets(s);
	   for(i=0;i<strlen(s);i++){
		   if(s[i]!=' '){
		      n=s[i]-'0';
		     // printf("%d\n",n);
		     while(s[++i]!=' ' && s[i]!='\0'){  
					n=n*10+(s[i]-'0');
					
					}
			ar[j]=n;		
		   //printf("%d\n",ar[j]);
		   j++;
		   }
	   }
	   f=ar[0];
	   b=ar[1];
	   t=ar[2];
	   fd=ar[3];
	   bd=ar[4];
	   //printf("F=%d\tB=%d\tT=%d\tFD=%d\tBD=%d\n",f,b,t,fd,bd);
	if(f==b){
			if(f>=fd){
				tt=(fd*t);
				printf("%d F",tt);
				}else{
					printf("No Ditch");
					}
		
		}else{  
				if(f>b){
							for(i=1;td<fd;i++){
								 if(i%2==0){
									 td-=b;
									 tt+=(t*b);
									 }else{
										 td+=f;
										 tt+=(t*f);
										 }
								 
								}
							
					if(td>=fd){
						ed=td-fd;
						tt-=(t*ed);
						printf("%d F",tt);
						}
					
					
					}else{
						  for(i=1;td<bd;i++){
							  if(i%2==0){
								  td+=b;
								  tt+=(t*b);
								  }else{
									  td-=f;
									  tt+=(t*f);
									  
									  
									  }
							  
							  }
						
						if(td>=bd){
						ed=td-bd;
						tt-=(t*ed);
						printf("%d B",tt);
						}
						}
			}
	ch--;   
   }
	   return 0;
		}

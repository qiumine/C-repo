#include  <stdio.h>
int main()  {
       char * s1="Hello",*s2="Beijing"; 
       FILE *pf=fopen("abc.dat","wb+");     
   
       fwrite(s2,3,2,pf);    // ��s2�е��ַ�д��3���ֽڣ�д2��(��д�������ֽ�) 
       fseek(pf,-1,SEEK_CUR);  // SEEK_CUR��ǰλ��    -1������һλ 
       fwrite(s1,5,1,pf);     
   
       fclose(pf); 
       return 0;
}

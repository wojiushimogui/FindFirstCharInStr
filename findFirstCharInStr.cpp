#include<stdio.h>
#include<string.h>
/*
题目描述：
在一个字符串(1<=字符串长度<=10000，全部由大写字母组成)中找到第一个只出现一次的字符。
输入：
输入有多组数据
每一组输入一个字符串。
输出：
输出第一个只出现一次的字符下标，没有只出现一次的字符则输出-1。
样例输入：
ABACCDEFF
AA
样例输出：
1
-1
*/
//此种方法经过验证，是不能够完成此功能的 
void findFirstCharInStr(char *str){
	//先验证str是否有效 
	if(str==NULL||str==" "){
		return ;
	}
	int len=0;
	int index=0;
	while(str[index]!='\0'){
		len++;
		index++;
	}
	printf("字符串长度%d\n",len);
	int count=1;//用来计数
	//利用两层循环来寻找第一个只出现一次的字符的下标 
	int i=0;
	for(;i<len;i++){
		char ch=str[i];
		for(int j=i+1;j<len;j++){
			if(count>1){//当字符出现的次数大于1之后，就跳出内层循环 
				break;
			}
			if(ch==str[j]) 
				count++;
			
		}
		if(1==count){//如果检测到某个字符出现的次数为 1，则输出，并跳出外层循环 
			printf("第一个出现一次的字符的下标：%d\n",i);
			break;
		}
		count=1;//将count重置为  1 
	}
	if(i==len-1){//若没有找到，则输出 -1 
		printf("%d\n",-1);
	}
	
}
int main(void){
	char str[10000];
	gets(str);
	//puts(str);
	while(1){
		findFirstCharInStr(str);
		gets(str);
	}
	
	return 0;
}

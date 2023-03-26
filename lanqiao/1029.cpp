#include<cstdio>

int main(){
	char TianGan[10][6] = {"jia", "yi", "bing", "ding", "wu", "ji", "geng", "xin", "ren", "gui"};
	char Dizhi[12][6]= {"zi", "chou", "yin", "mao", "chen", "si", "wu", "wei", "shen", "you", "xu", "hai"};
	
	int t=6, d=0, year;
	scanf("%d", &year);
	
	year -= 2020;
	
	year = (year+60) % 60;
	
	while(year != 0){
		int sign = year > 0 ? -1 : 1;
		year += sign;
		t = (t - sign +10) % 10;
		d = (d - sign +12) % 12;
	}
	printf("%s%s", TianGan[t], Dizhi[d]);
}

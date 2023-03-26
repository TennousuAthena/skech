#include <cstdio>
int main()
{
	long long int a, b, n, count, day=0;
	scanf("%lld %lld %lld", &a, &b, &n);
	long long int num_per_week = a * 5 + b * 2;
	long long int full_week_count = n / num_per_week;
	count = num_per_week * full_week_count;
	day = full_week_count * 7;
	while(count < n){
		day++;
		if(day % 7 ==0 || day % 7 == 6){
			count +=b;
		}else{
			count +=a;
		}
	}
	printf("%lld", day);
	return 0;
}

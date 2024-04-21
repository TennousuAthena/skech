/*
	Warning! All the contents are automatically generated by KakennL which might be not correct!
   ▄▄▄▄▄▄▄  ▄  ▄         ▄▄▄▄▄▄▄  
   █ ▄▄▄ █ ▄▄█▀█ ▄▀▀▀▄▀▀ █ ▄▄▄ █  
   █ ███ █  ▀█▀ ▄██▀▄█▀  █ ███ █  
   █▄▄▄▄▄█ ▄▀▄ ▄ █▀▄ ▄▀█ █▄▄▄▄▄█  
   ▄▄▄ ▄▄▄▄█▀█▄▀█▄███ ▄█▄▄   ▄    
   ██▄▀▄█▄▀▀▄▀▀ ▀█▀▀▄   ▀█▄▄▀▄▄█  
      █  ▄▄▄  ▀▄█ █ ▀▀██▄█  ▄ █▄  
   ▀ █▄▀ ▄█▀█▄██▀▀ ▄▀█ ▀▀▀▄ █ ▄█  
   ▄ ▄▄█▄▄ ▄▀▀▄▀█▀█▄█ ▄██▄▄ █ █▄  
   ▄▀███ ▄▄ ▄▀▀ █▀▀█ ▄ ▀▀█  ▀▀▄█  
   ▄▀▀██▄▄ █▀▄▀▄█▄ ▀▀  ▄▄▄▄█▀ ▀   
   ▄▄▄▄▄▄▄ █  ███▀ ▀▀███ ▄ █▄▀██  
   █ ▄▄▄ █ █  ▄█▀▀▄██▀ █▄▄▄█▀ █   
   █ ███ █ ▄▀▄▀   ▀█▀ █▀▄ ▀█▄▀▀█  
   █▄▄▄▄▄█ █▀▀ ▄█▀ ▄▀ ▀█ ▄▄▄▄ █▄  
                                  
*/
#include <stdio.h>

#define NUM_STUDENTS 10

int main() {
  int scores[NUM_STUDENTS] = {78, 93, 85, 60, 65, 75, 98, 82, 90, 87};

  // 求出最高成绩和最低成绩
  int max_score = scores[0];
  int min_score = scores[0];
  for (int i = 1; i < NUM_STUDENTS; i++) {
    if (scores[i] > max_score) {
      max_score = scores[i];
    }
    if (scores[i] < min_score) {
      min_score = scores[i];
    }
  }

  // 求出平均成绩
  int sum = 0;
  for (int i = 0; i < NUM_STUDENTS; i++) {
    sum += scores[i];
  }
  double avg_score = (double)sum / NUM_STUDENTS;

  // 统计成绩低于60分的人数、高于平均值的人数和低于平均值的人数
  int num_below_60 = 0;
  int num_above_avg = 0;
  int num_below_avg = 0;
  for (int i = 0; i < NUM_STUDENTS; i++) {
    if (scores[i] < 60) {
      num_below_60++;
    }
    if (scores[i] > avg_score) {
      num_above_avg++;
    }
    if (scores[i] < avg_score) {
      num_below_avg++;
    }
  }

  // 输出结果
  printf("原始成绩：");
  for (int i = 0; i < NUM_STUDENTS; i++) {
    printf("%d ", scores[i]);
  }
  printf("\n");
  printf("最高成绩：%d\n", max_score);
  printf("最低成绩：%d\n", min_score);
  printf("平均成绩：%.2f\n", avg_score);
  printf("低于60分的人数：%d\n", num_below_60);
  printf("高于平均值的人数：%d\n", num_above_avg);
  printf("低于平均值的人数：%d\n", num_below_avg);

  return 0;
}
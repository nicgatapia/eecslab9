#include <stdio.h>

int main(void) {
  int score, td, safety, fg, xp, tpc;

  int valid_score = 0;
  while (valid_score == 0){
    printf("Enter a score: ");
    scanf("%d", &score);
    if (score >= 2) {
      valid_score = 1;
    }
    else {
        printf("Please enter a valid score.\n");
        break;
    }
  }

  for (int tpc = 0; tpc <= score / 8; tpc++){
    int remaining1 = score - tpc * 8;
    for (int xp = 0; xp <= remaining1 / 7; xp++){
      int remaining2 = remaining1 - xp * 7;
      for (int td = 0; td <= remaining2 / 6; td++) {
        int remaining3 = remaining2 - td * 6;
        for (int fg = 0; fg <= remaining3 / 3; fg++) {
          int remaining4 = remaining3 - fg * 3;
          for (int safety = 0; safety <= remaining4 / 2; safety++) {
            if (tpc * 8 + xp * 7 + td * 6 + fg * 3 + safety * 2 == score) {
              printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety\n", tpc, xp, td, fg, safety);
            }
          }
        }
      }
    }
  }

  return 0;
}

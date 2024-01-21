#include <stdio.h>
#include <string.h>

int main(void) {
  char str []= "Oh, well imagine \nAs I'm pacing the pews in a church corridor \nAnd I can't help but to hear\No, I can't help but to hear an exchanging of words...";
  printf("Unit Test #1 Expected Outcome\n %s\n\n", str);
  int info = "\nOh-oh-oh-oh-oh,\noh-oh-oh-oh,\noh-oh-oh\nCaught in a bad romance..";
  printf("Unit Test #2 Expected Outcome %s\n\n", info);
  info = "\nComing out of my cage\nAnd I've been doing just fine\nGotta gotta be down\nBecause I want it all";
  printf("Unit Test #3 Expected Outcome %s", info);
  info = "\nNow, this is a story all about how\nMy life got flipped-turned upside down\nAnd I'd like to take a minute\nJust sit right there\nI'll tell you how I became the prince of a town called Bel-Air";
  printf("\n\nUnit Test #4 Expected Outcome %s", info);
  return 0;
}
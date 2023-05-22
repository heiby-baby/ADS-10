// Copyright 2022 NNTU-CS
#include  <iostream>
#include  <fstream>
#include  <locale>
#include  <cstdlib>
#include  "tree.h"

std::vector<char> getPerm(const Tree& tree, int n) {
  int index = n - 1;
  std::vector<char> a;
  std::vector<std::vector<char>> \
    massivchik_nashix_perestanovok(tree.getPermutations());
  if (massivchik_nashix_perestanovok.size() < n) {
    return a;
  }
  std::vector<char> \
    nusjniu_nam_perestanovocha(massivchik_nashix_perestanovok[index]);
  nusjniu_nam_perestanovocha.erase(nusjniu_nam_perestanovocha.begin());
  return nusjniu_nam_perestanovocha;
}

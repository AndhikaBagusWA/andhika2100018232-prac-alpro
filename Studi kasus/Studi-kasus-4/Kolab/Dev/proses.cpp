#include "../Library/proses.h"
#include <fstream>
#include <iostream>

int main() {
  Proses proses;
  proses.getdata();
  proses.toFile();
  proses.cetak();
  return 0;
}
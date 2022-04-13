#include <iostream>
#include <fstream>
#include "../Library/input.h"
#include "../Library/proses.h"
#include "../Library/output.h"

int main() {
	// untuk input
	Input input;
  input.cetak();
  input.toFile();
	
	// untuk proses
	Proses proses;
  proses.getData;
  proses.cetak;

	// untuk output
	Output output;
	output.getData();
	output.cetak();
}
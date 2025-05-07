#include <iostream>
#include <fstream>
using namespace std;

int N, A[100], B[100], G[100];

int num_correct(int starting_shell)
{
  int current_shell = starting_shell, correct = 0;
  for (int i=0; i<N; i++) {
    if (A[i] == current_shell) current_shell = B[i];
    else if (B[i] == current_shell) current_shell = A[i];
    if (current_shell == G[i]) correct++;
  }
  return correct;
}

int main(void)
{
  ifstream fin ("shell.in");
  fin >> N;
  for (int i=0; i<N; i++)
    fin >> A[i] >> B[i] >> G[i];

  int best = 0;
  for (int i=1; i<=3; i++)
    best = max(best, num_correct(i));

  ofstream fout ("shell.out");
  fout << best << "\n";
  return 0;
}


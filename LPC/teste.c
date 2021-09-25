int main(void) {
  int nvetor[10], vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int rotacoes = 3;

  for (int i = rotacoes; i < 10; i++){
    nvetor[i-rotacoes] = vetor[i];
  }

  for (int i = 0; i < rotacoes; i++){
    nvetor[10-rotacoes+i] = vetor[i];
  }

  for (int i = 0; i < 10; i++){
    printf("%i\t ", nvetor[i]);
  }
  
  return 0;
}
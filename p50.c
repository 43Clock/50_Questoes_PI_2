int main() {
  char s1[10] = "Ola";
  char s2[10] = "la";
  char s3[10];
  *s3 = mystrstr(s1,s2);
}

char *mystrstr (char s1[], char s2[]) {
  int i,j = 0,tmp;
  while (s1[i] != '\0') {
      if (s1[i] != s2[j]) i++;
      else {
          tmp = i;
          while (s1[tmp] == s2[j] && s2[j] != '\0' && s1[tmp] != '\0') {
              tmp++;
              j++;
          }
          if (s2[j] == '\0') return s1 + i;
          else {
              j = 0;
              i++;
            }
        }
    }
    return NULL;
}
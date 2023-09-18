void rev_string(char *s)
{
  int len = _strlen(s);
  int i = 0;
  int j = len - 1;

  while (i < j)
  {
    char temp = s[i];
    s[i] = s[j];
    s[j] = temp;
    i++;
    j--;
  }
}

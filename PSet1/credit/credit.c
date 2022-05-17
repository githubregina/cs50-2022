#include <cs50.h>
#include <stdio.h>

int main(void)
{
  long int num;
  num = get_long("Enter your card number: ");

  int count = 0;
  int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, i = 0, j = 0, k = 0, l = 0, m = 0, n = 0, o = 0, p = 0;
  int sb = 0, sd = 0, sf = 0, sh = 0, sj = 0, sl = 0, sn = 0, sp = 0;

  {
    a = num % 10;
    count++;
    num = num / 10;
  }
  {
    b = num % 10;
    count++;
    num = num / 10;
    sb = b * 2;
    if (sb >= 10)
    {
      sb = sb % 10 + sb / 10;
    }
  }
  {
    c = num % 10;
    count++;
    num = num / 10;
  }
  {
    d = num % 10;
    count++;
    num = num / 10;
    sd = d * 2;
    if (sd >= 10)
    {
      sd = sd % 10 + sd / 10;
    }
  }
  {
    e = num % 10;
    count++;
    num = num / 10;
  }
  {
    f = num % 10;
    count++;
    num = num / 10;
    sf = f * 2;
    if (sf >= 10)
    {
      sf = sf % 10 + sf / 10;
    }
  }
  {
    g = num % 10;
    count++;
    num = num / 10;
  }
  {
    h = num % 10;
    count++;
    num = num / 10;
    sh = h * 2;
    if (sh >= 10)
    {
      sh = sh % 10 + sh / 10;
    }
  }
  {
    i = num % 10;
    count++;
    num = num / 10;
  }
  {
    j = num % 10;
    count++;
    num = num / 10;
    sj = j * 2;
    if (sj >= 10)
    {
      sj = sj % 10 + sj / 10;
    }
  }
  {
    k = num % 10;
    count++;
    num = num / 10;
  }
  {
    l = num % 10;
    count++;
    num = num / 10;
    sl = l * 2;
    if (sl >= 10)
    {
      sl = sl % 10 + sl / 10;
    }
  }
  {
    m = num % 10;
    count++;
    num = num / 10;
  }

  if (num > 0)
  {
    {
      n = num % 10;
      count++;
      num = num / 10;
      sn = n * 2;
      if (sn >= 10)
      {
        sn = sn % 10 + sn / 10;
      }
    }
    {
      o = num % 10;
      count++;
      num = num / 10;
    }
    while (num > 0)
    {
      {
        p = num % 10;
        count++;
        num = num / 10;
        sp = p * 2;
        if (sp >= 10)
        {
          sp = sp % 10 + sp / 10;
        }
      }
    }
  }

  int sum;
  sum = a + sb + c + sd + e + sf + g + sh + i + sj + k + sl + m + sn + o + sp;
  // printf("%i\n", sum);
  // printf("%i%i%i%i%i%i%i%i%i%i%i%i%i%i%i%i\n", a, sb, c, sd, e, sf, g, sh, i, sj, k, sl, m, sn, o, sp);

  if (sum % 10 > 0)
  {
    printf("INVALID\n");
  }
  else if (count < 13)
  {
    printf("INVALID\n");
  }
  else
  {
    if (count == 13 && m == 4)
    {
      printf("VISA\n");
    }
    else if (count == 16 && p == 4)
    {
      printf("VISA\n");
    }
    else if (count == 15 && o == 3 && (n == 4 || n == 7))
    {
      printf("AMEX\n");
    }
    else if (count == 16 && p == 5 && (o == 1 || o == 2 || o == 3 || o == 4 || o == 5))
    {
      printf("MASTERCARD\n");
    }
    else
    {
      printf("INVALID\n");
    }
  }
}
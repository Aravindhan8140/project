#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct shop
{
  int shopno;
  int productno;
  int prdtcount;
  int prdtrate;
  char productname[25];
  char shopaddress[25];
} s[5];

int
main ()
{
  int i, j, count = 0;
  char productreq[25];
  printf ("enter shop details:\n");
  for (i = 0; i < 5; i++)
    {
      s[i].shopno = i + 1;
      printf ("for shopnumber%d,\n", s[i].shopno);
      printf ("enter the product no:\n");
      scanf ("%d", &s[i].productno);
      printf ("enter the productname:\n");
      scanf ("%s", s[i].productname);
      printf ("\n");
      printf ("enter product rate:\n");
      scanf ("%d", &s[i].prdtrate);
      printf ("enter shopaddress :\n");
      scanf ("%s", s[i].shopaddress);
      printf ("\n");
    }
  printf ("enter the product req:");
  scanf ("%s", &productreq);
  for (i = 0; i < 5; i++)
    {
      if (strcmp (productreq, s[i].productname) == 0)
	{
	  printf ("\n req product is available in shop %d", i);
	  printf ("\n Product rate is :%d", s[i].prdtrate);
	  printf ("\n Shop Address is :%s", s[i].shopaddress);
	}
      else
	{
	  count++;
	}


    }
  if (count == 5)
    printf ("Product is not available");

  return 0;
}

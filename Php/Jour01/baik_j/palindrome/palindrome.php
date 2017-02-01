#!/usr/bin/env php
<?php
// palindrome.php for palindrome in 
// 
// Made by BAIK Jaehyun
// Login   <baik_j@etna-alternance.net>
// 
// Started on  Mon Apr 11 13:24:02 2016 BAIK Jaehyun
// Last update Tue Apr 12 01:13:53 2016 BAIK Jaehyun
//

function palindrome($param = null)
{
  $result = true;
  $count = 0;
  $size = 0;

  while (isset($param[$size]))
    {
      if ($param[$size] == ' ')
	{
	  $param[$size] = '';
	}
      ++$size;
    }
  --$size;
  while ($count < $size)
    {
      if ($param[$size] == ' ')
	{
	  $param[$size] = '';
	}
      if ($param[$count] == ' ')
	{
	  $param[$count] = '';
	}
      if (ord($param[$size] != ord($param[$count])))
	{
	  if (ord($param[$size] + ' ') != (ord($param[$count])) + ' ')
	    {
	      if (ord($param[$size]) != (ord($param[$count]) + ' '))
		{
		  $result = false;
		}
	    }
	}
      ++$count;
      --$size;
    }
  echo ($result ? "True\n" : "False\n");
}
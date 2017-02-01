#!/usr/bin/env php
<?php
// content.php for content in 
// 
// Made by BAIK Jaehyun
// Login   <baik_j@etna-alternance.net>
// 
// Started on  Tue Apr 12 10:14:48 2016 BAIK Jaehyun
// Last update Tue Apr 12 18:10:08 2016 BAIK Jaehyun
//

function	error($arg)
{
  if (file_exists($arg) == false)
    {
      echo ("content.php: " . $arg . ": No such file or directory\n");
      return (1);
    }
  else
    {
      if (is_dir($arg))
	{
	  echo ("content.php: " . $arg. ": Is a directory\n");
	  return (1);
	}
      else if (is_readable($arg) == false || is_writable($arg) == false)
	{
	  echo ("content.php: " . $arg . ": Permission denied\n");
	  return (1);
	}
      else
	return (0);
    }
}

for ($i = 1; $i < $argc; $i++)
  {
    if (error($argv[$i]) == 0)
      {
	$handle = fopen($argv[$i], "r");
	if (!$handle)
	  echo ("content.php: " . $argv[$i] . ": Cannot open file\n");
	else
	  {
	    $contents = fread($handle, filesize($argv[$i]));
	    fclose($handle);
	    echo ($contents);
	  }
      }
  }
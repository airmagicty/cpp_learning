<?php

// Инициализация переменных
$fname_groupinput = "GroupInput.txt";
$fname_basegenerate = "BaseGenerate.txt";
$fname_logedit = "LogEdit.txt";
$year = 2021;
/*
$day = date("d");
$month = date("m");
$year = date("Y");
$days_of_week = array(1 => "понедельник", "вторник", "среда", "четверг", "пятница", "суббота", "воскресенье");

print "Сегодня: $day.$month.$year, ". $days_of_week[date("N")];
*/

// Считываем файл со списком людей
$group_input = file($fname_groupinput);

$mont_i = 9;
$year_i = $year;
for ($m = 1; $m <= 12; $m++)
{
	for ($day_i = 1; $day_i <= date("t", strtotime("1.$month.$year_i")); $day_i++)
	{
		print ("<br>$year_i.$month_i.$day_i");
	}

	$month_i++;
	if ($month_i > 12)
	{
		$month_i = 1;
		$year_i++;
	}
}
@echo off
set var=value
rem set /p name=Enter your name:
echo lets build the current path project man
rem echo %path% > path.txt
set /a var1=1
set /a var2=2
set /a var3=3
rem echo %var3%
 set /a globalvariable=10
 setlocal
 set /a localvariable=20
 set /a localvariable=%localvariable%+30
 echo lv=%localvariable%
 echo gv=%globalvariable%
 endlocal
 echo gv=%globalvariable%
 echo lv=%localvariable%
 set [%a%]==[] echo "A is Empty"
 set [%z%]==[] echo "Z is Empty"
 
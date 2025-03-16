@echo off
:: 最新の .cpp ファイルを取得
for /f "delims=" %%F in ('dir /b /od /a-d "AtCoder Beginner Contest 397\mySolutions\*.cpp"') do set LATEST_FILE=%%F

:: コンパイル＆実行
g++ "AtCoder Beginner Contest 397\mySolutions\%LATEST_FILE%" -o a.exe
a.exe

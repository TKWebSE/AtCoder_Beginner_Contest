@echo off
setlocal enabledelayedexpansion

:: ベースディレクトリを指定
set BASE_DIR=D:\AtCoder_Beginner_Contest
set SCRIPTS_DIR=D:\AtCoder_Beginner_Contest\atcoder_scripts

:: URL.cpp の内容をもとに、最後のコンテスト番号を取得
set LAST_URL=0
for /f "tokens=1 delims=/" %%A in ('type "%BASE_DIR%\URL.cpp" ^| findstr /r "abc[0-9]"') do (
    for /f "tokens=2 delims=c" %%B in ("%%A") do set LAST_URL=%%B
)

:: コンテスト番号をインクリメント
set /a NEXT_CONTEST=%LAST_URL%+1

:: コンテストフォルダを作成
set CONTEST_NAME=AtCoder Beginner Contest %NEXT_CONTEST%
set CONTEST_DIR=%BASE_DIR%\%CONTEST_NAME%
mkdir "%CONTEST_DIR%"
mkdir "%CONTEST_DIR%\explanations"
mkdir "%CONTEST_DIR%\mySolutions"

:: 解説ページURLの作成
set EDITORIAL_URL=https://atcoder.jp/contests/abc%NEXT_CONTEST%/editorial

:: URL.cpp を新しいコンテストフォルダ内に作成
set URL_FILE=%CONTEST_DIR%\URL.cpp
(
    echo // 解説:
    echo.
    echo %EDITORIAL_URL%
    echo.
) > "%URL_FILE%"

:: example.cpp を ABCD ファイルとしてコピー
set EXAMPLE_FILE=%SCRIPTS_DIR%\example.cpp
for %%D in (A B C D) do (
    copy "%EXAMPLE_FILE%" "%CONTEST_DIR%\explanations\%%D.cpp" > nul
    copy "%EXAMPLE_FILE%" "%CONTEST_DIR%\mySolutions\%%D.cpp" > nul
)

:: 完了メッセージ
echo 🎉 New contest folder, editorial URL, and ABCD template files created:
echo Folder: %CONTEST_DIR%
echo Editorial URL: %EDITORIAL_URL%
pause

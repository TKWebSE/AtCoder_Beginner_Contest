@echo off
setlocal enabledelayedexpansion

:: ベースディレクトリを指定
set BASE_DIR=D:\AtCoder_Beginner_Contest
set SCRIPTS_DIR=D:\AtCoder_Beginner_Contest\atcoder_scripts

:: AtCoder_Beginner_Contest 配下のフォルダを調べて、最大の番号を取得
set LAST_CONTEST=0

for /d %%D in ("%BASE_DIR%\*") do (
    for /f "tokens=4" %%N in ("%%~nxD") do (
        set /a "NUM=%%N"
        if !NUM! gtr !LAST_CONTEST! set LAST_CONTEST=!NUM!
    )
)

:: コンテスト番号をインクリメント
set /a NEXT_CONTEST=LAST_CONTEST+1

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

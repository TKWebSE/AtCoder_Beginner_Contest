@echo off
chcp 65001
setlocal enabledelayedexpansion

:: コンテスト番号を引数から取得
set "contest_number=%~1"
if "%contest_number%"=="" (
    echo コンテスト番号を指定してください。
    exit /b 1
)

:: スクリプトのあるディレクトリを取得
set "SCRIPT_DIR=%~dp0"
set "BASE_DIR=D:\AtCoder_Beginner_Contest"
set "CONTEST_DIR=%BASE_DIR%\AtCoder Beginner Contest %contest_number%"
set "EXAMPLE_FILE=%SCRIPT_DIR%example.cpp"

:: フォルダ作成
mkdir "%CONTEST_DIR%" 2>nul
mkdir "%CONTEST_DIR%\explanations" 2>nul
mkdir "%CONTEST_DIR%\mySolutions" 2>nul

:: URL.cpp を作成し、テンプレートを書き込む
echo // 解説 > "%CONTEST_DIR%\URL.cpp"
echo https://atcoder.jp/contests/abc%contest_number%/editorial >> "%CONTEST_DIR%\URL.cpp"

:: A.cpp ～ D.cpp を作成し、example.cpp の内容をコピー
for %%l in (A B C D) do (
    if exist "%EXAMPLE_FILE%" (
        copy "%EXAMPLE_FILE%" "%CONTEST_DIR%\explanations\%%l.cpp" > nul
        copy "%EXAMPLE_FILE%" "%CONTEST_DIR%\mySolutions\%%l.cpp" > nul
    ) else (
        echo. > "%CONTEST_DIR%\explanations\%%l.cpp"
        echo. > "%CONTEST_DIR%\mySolutions\%%l.cpp"
    )
)

echo コンテストフォルダを作成しました: "%CONTEST_DIR%"

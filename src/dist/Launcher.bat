@echo off

echo Starting Glassomium UI server...
taskkill /IM ruby.exe
start "Glassomium UI Server" /D .\server ruby main.rb  --pauseonfailure


echo Starting Glassomium...
start "Glassomium" /D .\bin glassomium.exe

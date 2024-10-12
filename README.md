# DiscordBot🤖

このリポジトリは、各言語の文法を確認するためのbotです。



## Mac環境でのセットアップ手順
1. 仮想環境を作成しdiscord.pyをinstallします。
```
python3 -m venv venv
source venv/bin/activate
pip3 install discord.py
```

2. botの作成
[Discord Developer Portal](https://discord.com/developers/applications/)から新しくbotを作成し、TOKENをknocker.pyのTOKEN変数に貼り付けます。

3. botをactivenにする。
```
python3 knocker.py
```
作業が終了したら`deactivate`で仮想環境を終了します。


## 使い方
Discord内でBotがのactiveの時に`!knock`とメッセージを送信すると、Botを起動できます。
```
どの言語の問題を見ますか？
1: Python
2: JavaScript
3: その他
```

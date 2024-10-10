import discord
import os

# Discord Botのトークンを設定
TOKEN = 'YOUR_DISCORD_BOT_TOKEN'

client = discord.Client()

# 状態管理用の辞書
user_states = {}

@client.event
async def on_ready():
    print(f'Logged in as {client.user}')

@client.event
async def on_message(message):
    # ボット自身のメッセージには反応しない
    if message.author == client.user:
        return

    # コマンドのトリガー
    if message.content.startswith('!knock'):
        await message.channel.send("どの言語の問題を見ますか？\n1: Python\n2: JavaScript\n3: その他")
        user_states[message.author.id] = "waiting_for_language"  # 状態を保存

    elif message.author.id in user_states:
        if user_states[message.author.id] == "waiting_for_language":
            language_choice = message.content.strip()
            if language_choice == '1':
                await message.channel.send("Pythonの問題セットを選んでください:\n1: 問題セット001\n2: 問題セット002")
                user_states[message.author.id] = "waiting_for_python_set"
            elif language_choice == '2':
                await message.channel.send("JavaScriptの問題セットを選んでください:\n1: 問題セット001\n2: 問題セット002")
                user_states[message.author.id] = "waiting_for_js_set"
            else:
                await message.channel.send("無効な選択です。もう一度言語を選んでください。")
                return

        elif user_states[message.author.id] == "waiting_for_python_set":
            problem_set = message.content.strip()
            if problem_set in ['1', '2']:
                dir_path = f'py_training/py_problem_set00{problem_set}'
                await send_problem_list(message, dir_path, 'Python')
            else:
                await message.channel.send("無効な選択です。もう一度問題セットを選んでください。")

        elif user_states[message.author.id] == "waiting_for_js_set":
            problem_set = message.content.strip()
            if problem_set in ['1', '2']:
                dir_path = f'js_training/js_problem_set00{problem_set}'
                await send_problem_list(message, dir_path, 'JavaScript')
            else:
                await message.channel.send("無効な選択です。もう一度問題セットを選んでください。")

        # 状態をリセット
        if message.content in ['1', '2']:
            user_states.pop(message.author.id)

async def send_problem_list(message, dir_path, language):
    if os.path.exists(dir_path):
        problems = [f for f in os.listdir(dir_path) if f.endswith('.py') or f.endswith('.js')]
        problem_list = "\n".join(problems)
        response = f"{language}の問題セット:\n{problem_list}"
        await message.channel.send(response)
    else:
        await message.channel.send(f'問題セットが見つかりませんでした: {dir_path}')

# Botを実行
client.run(TOKEN)

# # Makefile for Discord Bot project

# # プロジェクト名
# PROJECT_NAME = discord_bot

# # Python関連のコマンド
# PYTHON = python3
# PIP = pip3

# # ソースコードとテストのディレクトリ
# SRC_DIR = .
# TEST_DIR = tests
# PY_TRAINING_DIR = py_training

# # すべてのPythonファイルを対象にする
# PY_FILES = $(wildcard $(SRC_DIR)/*.py) $(wildcard $(TEST_DIR)/*.py)
# PY_TRAINING_FILES = $(wildcard $(PY_TRAINING_DIR)/**/*.py)

# # ターゲットのデフォルト
# .PHONY: all run test clean install run_all_py

# # デフォルトのターゲット
# all: run

# # ボットを実行
# run: $(PY_FILES)
# 	$(PYTHON) $(SRC_DIR)/js_knocker.py

# # テストを実行
# test:
# 	$(PYTHON) -m unittest discover -s $(TEST_DIR)

# # クリーンアップ
# clean:
# 	find . -name '*.pyc' -delete
# 	find . -name '__pycache__' -delete

# # 必要なパッケージをインストール
# install:
# 	$(PIP) install -r requirements.txt

# # py_trainingディレクトリ内のすべてのPythonファイルを実行し、結果をoutput.txtに保存
# run_all_py:
# 	@echo "Executing all Python files in $(PY_TRAINING_DIR)..."
# 	@mkdir -p output
# 	@for file in $(PY_TRAINING_FILES); do \
# 		$(PYTHON) $$file >> output/results.txt; \
# 	done
# 	@echo "Results saved to output/results.txt"


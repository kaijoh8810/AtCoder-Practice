import os
import re
import shutil

# ==========================================
# 設定
# ==========================================
# Trueなら移動せずログ出力のみ。Falseにすると実際に移動・作成を行う。
DRY_RUN = False 

# 50問ごとのフォルダを作るか (例: abc100-149, agc000-049)
USE_CHUNK_FOLDER = True
CHUNK_SIZE = 50
# ==========================================

def organize_files():
    current_dir = os.getcwd()
    
    # 対象となるファイルパターン
    # (abc または agc) + 数字3桁 を検知
    # Group 1: 種類 (abc/agc)
    # Group 2: 数字 (126, 012 など)
    pattern = re.compile(r'(abc|agc)(\d{3})', re.IGNORECASE)

    files = [f for f in os.listdir(current_dir) if os.path.isfile(f) and f != os.path.basename(__file__)]

    print(f"--- 整理開始 (Dry Run: {DRY_RUN}) ---")

    for filename in files:
        match = pattern.search(filename)
        if match:
            contest_type = match.group(1).lower() # 'abc' or 'agc'
            contest_num_str = match.group(2)
            contest_num = int(contest_num_str)
            
            # コンテストID (例: abc126, agc012)
            contest_id = f"{contest_type}{contest_num_str}"

            # 親フォルダの決定 (abc -> ABC, agc -> AGC)
            base_dir_name = contest_type.upper()
            
            # 1. 移動先パスの構築 (例: .../AtCoder/ABC)
            dest_path = os.path.join(current_dir, base_dir_name)

            # 2. 50回ごとのフォルダ (例: abc100-149, agc000-049)
            if USE_CHUNK_FOLDER:
                start = (contest_num // CHUNK_SIZE) * CHUNK_SIZE
                end = start + CHUNK_SIZE - 1
                # フォルダ名も abc... / agc... に合わせる
                chunk_folder = f"{contest_type}{start:03}-{end:03}"
                dest_path = os.path.join(dest_path, chunk_folder)

            # 3. 各コンテストのフォルダ (例: abc126, agc012)
            dest_path = os.path.join(dest_path, contest_id)

            # 4. 移動実行
            try:
                if not DRY_RUN:
                    os.makedirs(dest_path, exist_ok=True)
                    shutil.move(filename, os.path.join(dest_path, filename))
                    print(f"[移動済] {filename} -> {dest_path}")
                else:
                    print(f"[予定] {filename} -> {dest_path}")
            except Exception as e:
                print(f"[エラー] {filename} の移動に失敗: {e}")
        else:
            # abcXXX, agcXXX が含まれないファイルは無視
            pass

    print("--- 完了 ---")

if __name__ == "__main__":
    organize_files()
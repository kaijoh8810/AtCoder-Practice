import os

# ==========================================
# 設定
# ==========================================
# Trueなら変更せずログ出力のみ（確認用）。
# Falseにすると実際にファイル名を変更します。
DRY_RUN = False 

# 画像から解析したファイル名とコンテストIDの完全な対応表
FILE_MAPPING = {
    # --- AGC (Grand Contest) ---
    "A_AtCoder_Group_Contest.cpp": "agc012",
    "A_Digit_Sum_2.cpp":           "agc021",
    "A_Dividing_a_String.cpp":     "agc037",
    "A_Fairness.cpp":              "agc024",
    "A_Ice_Tea_Store.cpp":         "agc019",
    "A_Range_Product.cpp":         "agc002",
    "A_Table_Tennis_Training.cpp": "agc041",
    "A_Wanna_go_back_home.cpp":    "agc003",
    
    # --- ABC (Beginner Contest) A問題 ---
    "A_Yay.cpp":                   "abc100",

    # --- ABC B問題 ---
    "B_754.cpp":                      "abc114",
    "B_A_to_Z_String.cpp":            "abc053",
    "B_AcCepted.cpp":                 "abc104",
    "B_Coins.cpp":                    "abc087",
    "B_Comparison.cpp":               "abc059",
    "B_Contest_with_Drinks_Easy.cpp": "abc050",
    "B_Count_Balls.cpp":              "abc158",
    "B_Exponential.cpp":              "abc097",
    "B_Five_Dishes.cpp":              "abc123",
    "B_Foods_Loved_by_Everyone.cpp":  "abc118",
    "B_Good_Distance.cpp":            "abc133",
    "B_Guidebook.cpp":                "abc128",
    "B_Guidebook_ramda.cpp":          "abc128",
    "B_Increment_Decrement.cpp":      "abc052",
    "B_Lucas_Number.cpp":             "abc079",
    "B_Not_Found.cpp":                "abc071",
    "B_Postal_Code.cpp":              "abc084",
    "B_Ruined_Square.cpp":            "abc108",
    "B_Shiritori.cpp":                "abc109", # ShiritoriはABC109B
    "B_Some_Sums.cpp":                "abc083",
    "B_String_Rotation.cpp":          "abc103",
    "B_Varied.cpp":                   "abc063",
    "B_Which_is_ahead.cpp":           "abc342", # 最近のコンテスト
    "B_たてなが.cpp":                 "abc049", # 日本語ファイル名対応
    "B_美しい文字列.cpp":             "abc044",
    "B_文字列大好きいろはちゃんイージー.cpp": "abc042",

    # --- ABC C問題 ---
    "C_3_or_2.cpp":                   "abc100",
    "C_3_or_2_bit.cpp":               "abc100",
    "C_Attack_Survival.cpp":          "abc141",
    "C_Build_Stairs.cpp":             "abc136",
    "C_Christmas_Eve.cpp":            "abc115",
    "C_Coloring_Colorfully.cpp":      "abc124",
    "C_Count_Order.cpp":              "abc150",
    "C_Exception_Handling.cpp":       "abc134",
    "C_Half_and_Half.cpp":            "abc095",
    "C_Low_Elements.cpp":             "abc152",
    "C_Lower.cpp":                    "abc139",
    "C_Maximal_Value.cpp":            "abc140",
    "C_Poll.cpp":                     "abc155",
    "C_Prison.cpp":                   "abc127",
    "C_Skill_Up.cpp":                 "abc167",
    "C_Walk_on_Multiplication_Table.cpp": "abc144",
    "C_Welcome_to_AtCoder.cpp":       "abc151",
    
    # --- ABC D問題 ---
    "D_Brick_Break.cpp":              "abc148",
    "D_Caracal_vs_Monster.cpp":       "abc153",

    # --- その他 (企業コン等) ---
    # "100 to 105"という問題は三井住友信託銀行プロコン2019のC問題
    "C_100_to_105.cpp":               "sumitrust2019", 
}

def rename_files():
    print(f"--- リネーム処理開始 (Dry Run: {DRY_RUN}) ---")
    
    count = 0
    for filename, prefix in FILE_MAPPING.items():
        if os.path.exists(filename):
            # 新しい名前: abc114_B_754.cpp の形式にする
            new_filename = f"{prefix}_{filename}"
            
            # すでにリネーム済み(abc114_B_754.cppが存在する)場合はスキップ
            if os.path.exists(new_filename):
                print(f"[スキップ] {new_filename} は既に存在します")
                continue

            try:
                if not DRY_RUN:
                    os.rename(filename, new_filename)
                    print(f"[変更完了] {filename} -> {new_filename}")
                else:
                    print(f"[変更予定] {filename} -> {new_filename}")
                count += 1
            except Exception as e:
                print(f"[エラー] {filename} の変更失敗: {e}")
    
    if count == 0:
        print("--- 対象ファイルが見つかりませんでした（既に変更済みか、パスが違います） ---")
    else:
        print(f"--- 完了 (対象: {count}ファイル) ---")

if __name__ == "__main__":
    rename_files()
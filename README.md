# Python and C Integration Demo

このリポジトリは Python と C を連携させるデモです。特に、総和の計算において C 拡張モジュールがどれだけ高速に動作するかを比較しています。

## 環境設定

このプロジェクトは VS Code の DevContainer を用いて開発できます。
VS Code を開いた後に、DevContainer を使ってリモートコンテナ内でコードを実行することができます。

## ビルド手順

DevContainer 内で以下のコマンドを実行して C 拡張モジュールをビルドします。

```bash
sh build.sh
```

## 実行手順

ビルドが完了したら、以下のコマンドで Python スクリプトを実行できます。

```bash
python example.py
```

## 出力結果

以下のような出力が得られるはずです。

```
vscode ➜ /workspaces/python-c-integration-demo $ python example.py 
Result with C extension: 4999999950000000, Time: 0.024192333221435547 seconds
Result with pure Python: 4999999950000000, Time: 1.2020809650421143 seconds
```

この結果から、C拡張モジュールを使用することで計算が高速に行われることがわかります。

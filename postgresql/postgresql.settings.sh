su - postgres -c "
# postgresユーザーを作成
sudo adduser postgres
# postgresユーザーでログイン
su - postgres
# データベースディレクトリを作成
mkdir ~/pgdata
# データベースを初期化
initdb -D ~/pgdata
# pi ユーザの作成
createuser -P pi
"

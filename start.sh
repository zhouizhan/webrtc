nohup python3 signaling-server.py > signaling-server.log 2>&1 &

python3 -m http.server --bind 0.0.0.0 8080 > http-server.log 2>&1 &

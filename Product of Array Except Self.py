import speedtest

st = speedtest.Speedtest()
download_speed = st.download()
upload_speed = st.upload()
ping = st.results.ping

print(f"Download speed: {download_speed / 1_000_000} Mbps")
print(f"Upload speed: {upload_speed / 1_000_000} Mbps")
print(f"Ping: {ping} ms")
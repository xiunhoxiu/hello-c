import os
import qrcode

img = qrcode.make("https://youtu.be/xvFZjo5PgG0")

img.save("gr.png", "PNG")

os.system("open qr.png")

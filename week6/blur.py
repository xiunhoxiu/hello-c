from PIL import Image, ImageFilter

before = Image.open("bridge.bmp")
after = before.filter(ImageFilter.Boxblur(1))  # blur in box format, like 1 px above, below, left and right.
after.save("out.bmp")



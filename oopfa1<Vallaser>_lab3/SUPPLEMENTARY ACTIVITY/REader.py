from TextFileReaderWriter import TextFileReaderWriter
file = TextFileReaderWriter()
print(file.read('example.txt'))
print(file.write('example.txt', 'Goodmorning!'))

class TextFileReaderWriter:
    def read(self, filepath):
    
        with open(filepath, 'r', encoding='utf-8') as file:
            content = file.read()
        return content

    def write(self, filepath, data):
        
        
        with open(filepath, 'w') as file:
            file.write(data)
        return data

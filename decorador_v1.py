
class Mundo:
    def __init__(self):
        self.obj = []
    
        
    def search(self,url):
        self.obj.append(url)
        print(self.obj)
              
    def lucky(self,valor='estilo'):
        self.valor = valor
        print("O valor digitado foi: {}".format(self.valor))
m = Mundo()

m.search('www.com.br')
m.lucky()
    
    



















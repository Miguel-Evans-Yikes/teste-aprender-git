#usado para modificar o estado determinada função.
def log(function):
    def decorador(*args, **kwargs):
        print(f'Inicio da chamada da função:{function.__name__}')
        print(f'args: {args}')
        print(f'kwargs:{kwargs}')
        resultado = function(*args, **kwargs)
        print(f'Resultado da chamada: {resultado}')
        return resultado
    
@log    
def soma(a, b):
    return a+b 

if __name__=='__main__':
    print(soma(1,2))





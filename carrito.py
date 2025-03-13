carrito_de_compras = []
precio = []
total = sum(precio)

def mostrar_menu():
    print ('Menu')
    print ('1. Agregar al menu')
    print ('2. Mostrar contenido de la cesta')
    print ('3. Eliminar un producto')
    print ('4. Calcular el total de la compra')
    print ('5. Salir')
while True:
    mostrar_menu()
    opcion = input("Elige una opción: ")
    
    if opcion == "1":
       
        print ('Ingresa 6 para regresar al menu anterior')
        elemento = input("Introduce el nombre del elemento: ")
        precios = float(input("Introduce el precio del producto: "))
        if elemento == "6":
           print(mostrar_menu())
           print(f'Regresaste al menu anterior')
        else:
            carrito_de_compras.append(elemento)
            precio.append(precios)
            print(f"{elemento} ha sido agregado a la cesta.")
    
    elif opcion == "2":
        print("Cesta de la compra:")
        for i, item in enumerate(carrito_de_compras, start=1):
            print(f"{i}. {item}")

    elif opcion == "3":
        
        print (f'Ingresa 6 para regresar al menu anterior')
        elemento_a_eliminar = input(f"Introduce el nombre del elemento a eliminar: ")
        if elemento_a_eliminar == "6":
            print(mostrar_menu())
            print(f'Regresaste al menu anterior')
        elif elemento_a_eliminar in carrito_de_compras:
            carrito_de_compras.remove(elemento_a_eliminar)
            precio.remove(elemento_a_eliminar)
            print(f"{elemento_a_eliminar} ha sido eliminado.")
        else:
            print(f"{elemento_a_eliminar} no está en la cesta.")

    elif opcion == "4":

        print(f"El total es {len(carrito_de_compras)} elemento(s).") 
        print(f'El precio total en dolares es de:{total}')

    elif opcion == "5":
     
        print("¡Gracias por usar el programa! Adiós.")
        break
    
    else:
        print("Opción no válida, por favor intenta de nuevo.")
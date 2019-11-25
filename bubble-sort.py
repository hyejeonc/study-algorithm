# Bubble sort 
test = [1, 4, 3, 6, 2, 4, 8, 11]

def bubbleSort(liste):
    n = len(liste)
    for i in range(n-1, 0, -1):
        for j in range(i): # 
            if liste[j] > liste[j+1]:
                temp = liste[j]
                liste[j] = liste[j+1]
                liste[j+1] = temp
    return liste
print(bubbleSort(test))


<h1 align="center">Algoritmos de Ordenação</h1>

## Bubble Sort

Um algoritmo bem básico é o ‘Bubble Sort’ ou “Ordenação por Bolha”, a ideia desse algoritmo é comparar pares de elementos adjacentes, ou seja,
dois elementos sequências dentro de um array e vai trocar eles de lugar se estiverem na ordem errada, por exemplo, tenho dois elementos um 
adjacente ao  outro e os mesmos não estão na ordem que eu quero que é crescente ou decrescente, então eu os troco de lugar, tal processo se 
repete até que mais nenhuma troca seja necessária, ou seja, os (elementos já ordenados), o que torna o elemento bem simples de ordenação.
Falando da “Performance”, o melhor caso: O(n), n operações são necessárias para ordenar, ou seja, os dados já estão ordenados então ele 
só passa uma vez verificando, e seu pior caso: O(n²) então lembrando, o algoritmo básico tem seu desempenho ruim, e uma outra situação 
é que o mesmo não é recomendado para grandes conjuntos de dados. Portanto o Bubble Sort pode não ser considerado um algoritmo muito 
eficiente do ponto de vista por performance, ou seja, tudo pelo fato de sua complexidade assintótica muito elevado, uma complexidade de 
no mínimo O(n²) e tais não são tão eficientes.
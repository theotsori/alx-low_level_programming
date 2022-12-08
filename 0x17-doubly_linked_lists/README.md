<h1>C - Doubly linked lists</h1>
<img src="https://miro.medium.com/max/720/0*MMAUumoWF1doLkHY">
<br>
<a href="https://medium.com/@theodoretsori/c-doubly-linked-lists-b607c3435f32"><h2>Data structure for this project:</h2></a>

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

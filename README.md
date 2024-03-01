# Stack
## What is Stack?
A stack is a simple data structure used for storing data (similar to Linked Lists). In a stack, the order in which the data arrives is important. A pile of plates in a cafeteria is a good example of a stack. The plates are added to the stack as they are cleaned and they are placed on the top. When a plate, is required it is taken from the top of the stack. The first plate placed on the stack is the last one to be used.

Definition: A stack is an ordered list in which insertion and deletion are done at one end, called top [1]. The last element inserted is the first one to be deleted. Hence, it is called the Last in First out (LIFO) or First in Last out (FILO) list.

Special names are given to the two changes that can be made to a stack. When an element is inserted in a stack, the concept is called push, and when an element is removed from the stack, the concept is called pop. Trying to pop out an empty stack is called underflow and trying to push an element in a full stack is called overflow. Generally, we treat them as exceptions. As an example,consider of the stack

<img width="647" alt="Screenshot 2024-03-01 at 13 47 11" src="https://github.com/afrizalamrustian/StackSession/assets/45628881/df859194-be46-49b0-bb0a-4827003e5711">

## How stacks are used
Consider a working day in the office. Let us assume a developer is working on a long-term project. The manager then gives the developer a new task which is more important. The developer puts the long-term project aside and begins work on the new task. The phone rings, and this is the highest priority as it must be answered immediately. The developer pushes the present task into the pending tray and answers the phone.
When the call is complete the task that was abandoned to answer the phone is retrieved from the pending tray and work progresses. To take another call, it may have to be handled in the same manner, but eventually the new task will be finished, and the developer can draw the long-term project from the pending tray and continue with that.

Stack code example (push function)in C++
```cpp
void pushArrayBuku(string data){
    if(isFull()){
            cout << "data telah penuh"<< endl;
    }
    else{
        arrayBuku[top]=data;
        top++;
    }
}
```

#ifndef RCC_AST_NODE_H
#define RCC_AST_NODE_H


enum NodeType
{
    NODE_TYPE_INTEGER_LITERAL,
    NODE_TYPE_CHAR_LITERAL,
    NODE_TYPE_FLOAT_LITERAL,
    NODE_TYPE_STRING_LITERAL,
    NODE_TYPE_IDENTIFIER,

    NODE_TYPE_POST_UNARY_EXPRESSION,
    NODE_TYPE_PRE_UNARY_EXPRESSION,
    NODE_TYPE_BINARY_EXPRESSION,
    NODE_TYPE_EXPRESSION,
    


};

class Node {
public:
   Node(NodeType type);

   NodeType type();
   
private:
   NodeType _type;
};

#endif

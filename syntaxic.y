%{
    #include <stdio.h>
    #include <stdlib.h>
    #include "TableSymbole.h"

    // Déclaration de la fonction `yylex` pour que le compilateur la reconnaisse.
    int yylex();

    // Déclaration de la fonction `yyerror` pour la gestion des erreurs de syntaxe.
    void yyerror(const char *s);
    char sauvType [20];
    int j=0;
    typedef struct
   {  
      char idfTab[9];
      
   } elt_idf;
   elt_idf saveIdf[20];

%}

%union {
    int entier;
    float real;
    char character;
    char* string;
}

%token VAR_GLOBAL DECLARATION INSTRUCTION
%token INTEGER FLOAT CHAR CONST IF ELSE FOR READ WRITE
%token <string>IDENTIFIER <entier>INT_NUMBER_S <entier>INT_NUMBER FLOAT_NUMBER_S FLOAT_NUMBER CHARACTERE
%token AND OR NOT EQ NEQ GEQ LT LEQ GT
%token EQUALS PLUS MINUS MULTIPLY DIVIDE
%token LBRACE RBRACE LPAREN RPAREN LBRACKET RBRACKET SEMICOLON COMMA COLON
%token STRING_LITERAL

%type <string> assignment
//%start program
%%

// Starting rule for the program structure
program:
    VAR_GLOBAL LBRACE global_var_section RBRACE
    DECLARATION LBRACE declaration_section RBRACE
    INSTRUCTION LBRACE instruction_section RBRACE
;

// Define valid types for variables
type:
    INTEGER {strcpy(sauvType,"INTEGER");}
    | FLOAT {strcpy(sauvType,"FLOAT");}
    | CHAR  {strcpy(sauvType,"CHAR");}
;

// Section for global variables (converted to right-recursive)
global_var_section:
    declaration
    | declaration global_var_section
;

// Section for declarations (converted to right-recursive)
declaration_section:
    declaration
    | declaration declaration_section
;

// Section for instructions (converted to right-recursive)
instruction_section:
    statement
    | statement instruction_section
;

// Rule for different types of declarations
declaration:
    type variable_list SEMICOLON {
        //verification de la double declaration et insertion du type
        for(j=0;strcmp(saveIdf[j].idfTab,"")!=0;j++){
            if(verifdeclaration(saveIdf[j].idfTab)==0) insererType(sauvType,saveIdf[j].idfTab);
            else printf("Erreur semantique :double declaration de %s a la ligne %d\n",saveIdf[j].idfTab,nb_ligne);
            strcpy(saveIdf[j].idfTab,"");
        }j=0;    

    }
    | CONST type IDENTIFIER EQUALS expression SEMICOLON{
        strcpy(saveIdf[0].idfTab,$3);
        //verification de la double declaration et insertion du type
            if(verifdeclaration(saveIdf[0].idfTab)==0) insererType(sauvType,saveIdf[0].idfTab);
            else printf("Erreur semantique :double declaration de %s a la ligne %d\n",saveIdf[0].idfTab,nb_ligne);
            strcpy(saveIdf[0].idfTab,"");
        
    }
;

// Rule for a list of variables separated by commas (converted to right-recursive)
variable_list:
    IDENTIFIER {strcpy(saveIdf[j].idfTab,$1);j++;} 
    | IDENTIFIER LBRACKET INT_NUMBER RBRACKET  {strcpy(saveIdf[j].idfTab,$1);j++;}  
    | IDENTIFIER COMMA variable_list  {strcpy(saveIdf[j].idfTab,$1);j++;} 
    | IDENTIFIER LBRACKET INT_NUMBER RBRACKET COMMA variable_list  {strcpy(saveIdf[j].idfTab,$1);j++;} 
;

// Rule for a variable, which can be either simple or an array
variable:
    IDENTIFIER {strcpy(saveIdf.idfTab,$1);} 
    | IDENTIFIER LBRACKET INT_NUMBER RBRACKET  {strcpy(saveIdf[j].idfTab,$1);j++;} 
;



// Define possible statements in the instruction section
statement:
    assignment
    | condition
    | loop
    | io_statement
;

// Define assignment statement
assignment:
    IDENTIFIER EQUALS expression SEMICOLON {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration($1) == -1) {
            printf("Erreur sémantique: La variable '%s' n'est pas déclarée avant son utilisation.\n", $1);
        }/*else if (!typesCompatibles($1, $3)) {
            printf("Erreur sémantique : Type incompatible pour l'affectation de '%s'.\n", $1);
        }*/
    }
;

// Define conditional statement with optional else block
condition:
    IF LPAREN expression RPAREN LBRACE instruction_section RBRACE SEMICOLON
    | IF LPAREN expression RPAREN LBRACE instruction_section RBRACE ELSE LBRACE instruction_section RBRACE SEMICOLON
;

// Define loop statement
loop:
    FOR LPAREN assignment COLON expression COLON expression RPAREN LBRACE instruction_section RBRACE SEMICOLON
;

// Define input/output statements
io_statement:
    READ LPAREN IDENTIFIER RPAREN SEMICOLON/*{
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration($3) == -1) {
            printf("Erreur sémantique: La variable '%s' n'est pas déclarée avant son utilisation.\n", $1);
        }
    }*/
    | WRITE LPAREN io_expr_list RPAREN SEMICOLON
;

// Define a list of expressions for the WRITE statement (converted to right-recursive)
io_expr_list:
    io_expr
    | io_expr COMMA io_expr_list
;

// Define expressions in WRITE (prioritizes expression interpretation)
io_expr:
    expression         // Handles identifiers and arithmetic expressions
    | string_literal   // Handles direct string output
;

// Define expressions (arithmetic operations, converted to right-recursive)
expression:
    comparison_expr                    // Start with comparison expressions
    | comparison_expr AND expression   // Logical AND
    | comparison_expr OR expression    // Logical OR
;

// Define comparison expressions (includes comparison operators)
comparison_expr:
    term
    | term GT comparison_expr           // Greater than
    | term LT comparison_expr           // Less than
    | term GEQ comparison_expr          // Greater than or equal to
    | term LEQ comparison_expr          // Less than or equal to
    | term EQ comparison_expr           // Equal
    | term NEQ comparison_expr          // Not equal
;

// Define term as multiplication/division operations or a factor (converted to right-recursive)
term:
    factor
    | factor PLUS term                  // Addition
    | factor MINUS term                 // substraction
;

// Define factor as multiplication/division or a primary element
factor:
    primary
    | primary MULTIPLY factor           // Multiplication, right-recursive
    | primary DIVIDE factor             // Division, right-recursive
;

// Define primary elements: identifiers, numbers, and parenthesized expressions
primary:
    IDENTIFIER {
        // Vérification de la déclaration de la variable avant usage dans READ
        if (verifdeclaration($1) == -1) {
            printf("Erreur sémantique: La variable '%s' n'est pas déclarée avant son utilisation.\n", $1);
        }
    }
    | INT_NUMBER {
        if ($1 < 0 || $1 > 32767) {
            yyerror("Erreur : entier hors des limites autorisées (-32768 à 32767).");
        }
    }
    | FLOAT_NUMBER
    | INT_NUMBER_S{
        if ($1 < -32768 || $1 > 32767) {
            yyerror("Erreur : entier signé hors des limites autorisées (-32768 à 32767).");
        }
    }
    | FLOAT_NUMBER_S
    | LPAREN expression RPAREN
;

// Define string literals for WRITE statements
string_literal:
    STRING_LITERAL
;

%%

// Main function to start the parser
int main() {
    initialisation();
    
    yyparse(); 
    printf("\n");
    afficher(0);afficher(1);afficher(2);
    return 0;
}
int yywrap() {
    return 1;
}

// Function to handle errors during parsing

void yyerror(const char *s) {
    fprintf(stderr, "Error: %s at line %d, column %d\n", s, nb_ligne, col);

}


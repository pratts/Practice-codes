-module (multiply).
-export ([product/2, prodDouble/2]).

product (X, Y) -> X * Y.
prodDouble (X, Y) -> double(X) * double(Y).
double (X) -> X * 2.

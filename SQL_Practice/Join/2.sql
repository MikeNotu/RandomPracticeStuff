SELECT  *
FROM Orders
INNER JOIN Customers
ON Orders.CustomerID=Customers.CustomerID;
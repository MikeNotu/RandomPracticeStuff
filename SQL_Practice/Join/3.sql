SELECT  *
FROM Orders
RIGHT JOIN Customers
ON Orders.CustomerID=Customers.CustomerID;